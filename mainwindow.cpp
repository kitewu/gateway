#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->btn_motor_stop->setStyleSheet(BACKGROUND_COLOR_GREEN);
    ui->lcd_humi->setNumDigits(8);
    ui->lcd_humi->setPalette(Qt::black);
    ui->lcd_temp->setNumDigits(8);
    ui->lcd_temp->setPalette(Qt::black);
    ui->lcd_lig->setNumDigits(8);
    ui->lcd_lig->setPalette(Qt::black);
    ui->text_log->setReadOnly(true);
    ui->horizontalSlider_pwm->setRange(1, 9);
    ui->horizontalSlider_pwm->setTickPosition(QSlider::TicksRight);
    ui->horizontalSlider_pwm->setPageStep(1);
    pe_black.setColor(QPalette::WindowText,Qt::black);
    pe_red.setColor(QPalette::WindowText,Qt::red);

    serial_server = new SerialService();
    socket_server = new SocketService();
    temp_humi_light = new Temp_Humi_Light();
    motor = new Motor();
    relays = new Relays();
    touch = new Touch();
    smoke = new Smoke();
    infray = new InfRay();
    pwm = new Pwm();
    ultra = new Ultra();
    shake = new Shake();

    connect(ui->horizontalSlider_pwm, SIGNAL(valueChanged(int)), this, SLOT(changePwm(int)));
    connect(this->serial_server, SIGNAL(receiveMsgFromSerial(QByteArray)), this, SLOT(processMsgFromSerial(QByteArray)));
    connect(this->socket_server, SIGNAL(receiveMsgFromSocket(QString)), this, SLOT(processMsgFromSocket(QString)));
    connect(this, SIGNAL(addLog(QString)), this, SLOT(showLog(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showLog(QString log)
{
    ui->text_log->append(log);
}

void MainWindow::updateTempHumiLig()
{
    ui->lcd_temp->display(temp_humi_light->getTemperature());
    ui->lcd_humi->display(temp_humi_light->getHumidity());
    ui->lcd_lig->display(QString::number(temp_humi_light->getLight(), 'f', 1));
}

void MainWindow::processMsgFromSerial(QByteArray msg)
{
    if(msg.length() < 6)
        return;
    //温湿亮度
    if(msg[3] == 0x02 && msg[4] == 0x01)
    {
        temp_humi_light->setValue(msg);
        updateTempHumiLig();
    }
    //触摸事件
    else if(msg[3] == 0x07 && msg[4] == 0x01)
    {
        if(msg[5] == 0x01)
        {
            touch->setState(1);
            ui->label_touch->setPalette(pe_red);
            ui->label_touch->setText("touch");
        }
        else if(msg[5] == 0x00)
        {
            touch->setState(0);
            ui->label_touch->setPalette(pe_black);
            ui->label_touch->setText("no touch");
        }
    }
    //烟雾事件
    else if(msg[3] == 0x04 && msg[4] == 0x01)
    {
        if(msg[5] == 0x01)
        {
            smoke->setState(1);
            ui->label_fire->setPalette(pe_red);
            ui->label_fire->setText("smoke");
        }
        else if(msg[5] == 0x00)
        {
            smoke->setState(0);
            ui->label_fire->setPalette(pe_black);
            ui->label_fire->setText("no smoke");
        }
    }
    //热释红外事件
    else if(msg[3] == 0x05 && msg[4] == 0x01)
    {
        if(msg[5] == 0x01)
        {
            infray->setState(1);
            ui->label_inf_ray->setPalette(pe_red);
            ui->label_inf_ray->setText("signal");
        }
        else if(msg[5] == 0x00)
        {
            infray->setState(0);
            ui->label_inf_ray->setPalette(pe_black);
            ui->label_inf_ray->setText("no signal");
        }
    }
    //振动事件
    else if(msg[3] == 0x03 && msg[4] == 0x01)
    {
        if(msg[5] == 0x01)
        {
            shake->setState(1);
            ui->label_shake->setPalette(pe_red);
            ui->label_shake->setText("shake");
        }
        else if(msg[5] == 0x00)
        {
            shake->setState(0);
            ui->label_shake->setPalette(pe_black);
            ui->label_shake->setText("no shake");
        }
    }
    //超声波事件
    else if(msg[3] == 0x08 && msg[4] == 0x01)
    {
        int len = msg[5] * 256 + msg[6];
        ui->label_ultra->setText(QString::number(len));
        ultra->setState(len);
    }
    emit addLog(msg.toHex());
}

void MainWindow::processMsgFromSocket(QString msg)
{
    //测试用，无协议
    if(msg == "0")
        changeMotor(0);
    if(msg == "1")
        changeMotor(1);
    if(msg == "2")
        changeMotor(2);
}

void MainWindow::changePwm(int value)
{
    pwm->setState(value);
    unsigned char range = Pwm::RANGE[value];
    Pwm::MSG_PWM[4] = range;
    Pwm::MSG_PWM[5] = 0x50 + range;
    if(-1 == serial_server->writeToSerial(Pwm::MSG_PWM))
    {
        emit addLog("failed");
        return;
    }
    emit addLog("success");
}

void MainWindow::on_btn_relay_clicked()
{
    changeRelay(relays->getState());
}

void MainWindow::changeRelay(int state)
{
    //对传入的参数取反操作
    if(1 == state)
    {
        if(-1 == serial_server->writeToSerial(Relays::MSG_RELAY_CLOSE))
        {
            emit addLog("failed");
            return;
        }
        relays->setState(0);
        ui->btn_relay->setStyleSheet(BACKGROUND_COLOR_WHITE);
        ui->btn_relay->setText("open");
        emit addLog("success");
    }
    else if(0 == state)
    {
        if(-1 == serial_server->writeToSerial(Relays::MSG_RELAY_OPEN))
        {
            emit addLog("failed");
            return;
        }
        relays->setState(1);
        ui->btn_relay->setStyleSheet(BACKGROUND_COLOR_GREEN);
        ui->btn_relay->setText("close");
        emit addLog("success");
    }
}

void MainWindow::on_btn_serial_clicked()
{
    changeSerial(serial_server->getComState());
}

void MainWindow::changeSerial(int state)
{
    //对传入的参数取反操作
    if(1 == state)
    {
        if(serial_server->closeCom())
        {
            ui->btn_serial->setText("open");
            ui->btn_serial->setStyleSheet(BACKGROUND_COLOR_WHITE);
            emit addLog("close serial port success");
        }
        else
            emit addLog("close serial port failed");

    }
    else if(0 == state)
    {
        if(serial_server->openCom())
        {
            ui->btn_serial->setText("close");
            ui->btn_serial->setStyleSheet(BACKGROUND_COLOR_GREEN);
            emit addLog("open serial port success");
        }
        else
            emit addLog("open serial port failed");

    }
}

void MainWindow::on_btn_motor_f_clicked()
{
    changeMotor(1);
}

void MainWindow::on_btn_motor_b_clicked()
{
    changeMotor(2);
}

void MainWindow::on_btn_motor_stop_clicked()
{
    changeMotor(0);
}

void MainWindow::changeMotor(int state)
{
    if(0 == state)
    {
        if(-1 == serial_server->writeToSerial(Motor::MSG_MOTOR_STOP))
        {
            emit addLog("failed");
            return;
        }
        motor->setState(0);
        ui->btn_motor_stop->setStyleSheet(BACKGROUND_COLOR_GREEN);
        ui->btn_motor_b->setStyleSheet(BACKGROUND_COLOR_WHITE);
        ui->btn_motor_f->setStyleSheet(BACKGROUND_COLOR_WHITE);
        emit addLog("success");
    }
    else if(1 == state)
    {
        if(-1 == serial_server->writeToSerial(Motor::MSG_MOTOR_FORE))
        {
            emit addLog("failed");
            return;
        }
        motor->setState(1);
        ui->btn_motor_f->setStyleSheet(BACKGROUND_COLOR_GREEN);
        ui->btn_motor_b->setStyleSheet(BACKGROUND_COLOR_WHITE);
        ui->btn_motor_stop->setStyleSheet(BACKGROUND_COLOR_WHITE);
        emit addLog("success");
    }
    else if(2 == state)
    {
        if(-1 == serial_server->writeToSerial(Motor::MSG_MOTOR_BACK))
        {
            emit addLog("failed");
            return;
        }
        motor->setState(2);
        ui->btn_motor_b->setStyleSheet(BACKGROUND_COLOR_GREEN);
        ui->btn_motor_f->setStyleSheet(BACKGROUND_COLOR_WHITE);
        ui->btn_motor_stop->setStyleSheet(BACKGROUND_COLOR_WHITE);
        emit addLog("success");
    }
}
