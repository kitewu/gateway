#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->btn_close_serial->setStyleSheet(BACKGROUND_COLOR_GREEN);
    ui->btn_relay1_close->setStyleSheet(BACKGROUND_COLOR_GREEN);
    ui->btn_motor_stop->setStyleSheet(BACKGROUND_COLOR_GREEN);
    ui->btn_pwm_close->setStyleSheet(BACKGROUND_COLOR_GREEN);
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

    connect(ui->horizontalSlider_pwm, SIGNAL(valueChanged(int)), this, SLOT(onPwmValueChange(int)));
    connect(this->serial_server, SIGNAL(receiveMsgFromSerial(QByteArray)), this, SLOT(processMsgFromSerial(QByteArray)));
    connect(this, SIGNAL(addLog(QString)), this, SLOT(showLog(QString)));
    connect(this->socket_server, SIGNAL(receiveMsgFromSocket(QString)), this, SLOT(processMsgFromSocket(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_open_serial_clicked()
{
    ui->btn_open_serial->setStyleSheet(BACKGROUND_COLOR_GREEN);
    ui->btn_close_serial->setStyleSheet(BACKGROUND_COLOR_BLACK);
    if(serial_server->openCom())
        emit addLog("open serial port success");
    else
        emit addLog("open serial port failed");
}

void MainWindow::showLog(QString log)
{
    ui->text_log->append(log);
}

void MainWindow::on_btn_close_serial_clicked()
{
    ui->btn_close_serial->setStyleSheet(BACKGROUND_COLOR_GREEN);
    ui->btn_open_serial->setStyleSheet(BACKGROUND_COLOR_BLACK);
    if(serial_server->closeCom())
        emit addLog("close serial port success");
    else
        emit addLog("close serial port failed");
}

void MainWindow::updateTempHumiLig()
{
    ui->lcd_temp->display(temp_humi_light->getTemperature());
    ui->lcd_humi->display(temp_humi_light->getHumidity());
    ui->lcd_lig->display(QString::number(temp_humi_light->getLight(), 'f', 1));
}

void MainWindow::on_btn_motor_f_clicked()
{
    ui->btn_motor_f->setStyleSheet(BACKGROUND_COLOR_GREEN);
    ui->btn_motor_b->setStyleSheet(BACKGROUND_COLOR_BLACK);
    ui->btn_motor_stop->setStyleSheet(BACKGROUND_COLOR_BLACK);
    motor->setState(1);
    emit addLog(QString::number(serial_server->writeToSerial(Motor::MSG_MOTOR_FORE)));
}

void MainWindow::on_btn_motor_b_clicked()
{
    ui->btn_motor_b->setStyleSheet(BACKGROUND_COLOR_GREEN);
    ui->btn_motor_f->setStyleSheet(BACKGROUND_COLOR_BLACK);
    ui->btn_motor_stop->setStyleSheet(BACKGROUND_COLOR_BLACK);
    motor->setState(2);
    emit addLog(QString::number(serial_server->writeToSerial(Motor::MSG_MOTOR_BACK)));
}

void MainWindow::on_btn_motor_stop_clicked()
{
    ui->btn_motor_stop->setStyleSheet(BACKGROUND_COLOR_GREEN);
    ui->btn_motor_b->setStyleSheet(BACKGROUND_COLOR_BLACK);
    ui->btn_motor_f->setStyleSheet(BACKGROUND_COLOR_BLACK);
    motor->setState(0);
    emit addLog(QString::number(serial_server->writeToSerial(Motor::MSG_MOTOR_STOP)));
}

void MainWindow::on_btn_relay1_open_clicked()
{
    ui->btn_relay1_open->setStyleSheet(BACKGROUND_COLOR_GREEN);
    ui->btn_relay1_close->setStyleSheet(BACKGROUND_COLOR_BLACK);
    relays->setState(1);
    serial_server->writeToSerial(Relays::MSG_RELAY_OPEN);
}

void MainWindow::on_btn_relay1_close_clicked()
{
    ui->btn_relay1_close->setStyleSheet(BACKGROUND_COLOR_GREEN);
    ui->btn_relay1_open->setStyleSheet(BACKGROUND_COLOR_BLACK);
    relays->setState(0);
    serial_server->writeToSerial(Relays::MSG_RELAY_CLOSE);
}

void MainWindow::processMsgFromSerial(QByteArray msg)
{
    emit addLog(msg.toHex());
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
}

void MainWindow::on_btn_pwm_close_clicked()
{
    ui->btn_pwm_close->setStyleSheet(BACKGROUND_COLOR_GREEN);
    ui->btn_pwm_open->setStyleSheet(BACKGROUND_COLOR_BLACK);
    pwm->setState(0);
    Pwm::MSG_PWM[4] = 0x00;
    Pwm::MSG_PWM[5] = 0x50;
    serial_server->writeToSerial(Pwm::MSG_PWM);
}

void MainWindow::on_btn_pwm_open_clicked()
{
    ui->btn_pwm_open->setStyleSheet(BACKGROUND_COLOR_GREEN);
    ui->btn_pwm_close->setStyleSheet(BACKGROUND_COLOR_BLACK);
    pwm->setState(1);
    unsigned char range = Pwm::RANGE[pwm->getRange()];
    Pwm::MSG_PWM[4] = range;
    Pwm::MSG_PWM[5] = 0x50 + range;
    serial_server->writeToSerial(Pwm::MSG_PWM);
}

void MainWindow::onPwmValueChange(int value)
{
    pwm->setRange(value);
    if(pwm->getState())//如果是打开的，发送消息改变值，否则不执行
    {
        unsigned char range = Pwm::RANGE[value];
        Pwm::MSG_PWM[4] = range;
        Pwm::MSG_PWM[5] = 0x50 + range;
        serial_server->writeToSerial(Pwm::MSG_PWM);
    }
}

void MainWindow::processMsgFromSocket(QString msg)
{
    //测试用，无协议
    if(msg == "0")
    {
        ui->btn_motor_stop->setStyleSheet(BACKGROUND_COLOR_GREEN);
        ui->btn_motor_b->setStyleSheet(BACKGROUND_COLOR_BLACK);
        ui->btn_motor_f->setStyleSheet(BACKGROUND_COLOR_BLACK);
        serial_server->writeToSerial(Motor::MSG_MOTOR_STOP);
        motor->setState(0);
    }
    else if(msg == "1")
    {
        ui->btn_motor_f->setStyleSheet(BACKGROUND_COLOR_GREEN);
        ui->btn_motor_b->setStyleSheet(BACKGROUND_COLOR_BLACK);
        ui->btn_motor_stop->setStyleSheet(BACKGROUND_COLOR_BLACK);
        serial_server->writeToSerial(Motor::MSG_MOTOR_FORE);
        motor->setState(1);
    }
    else if(msg == "2")
    {
        ui->btn_motor_b->setStyleSheet(BACKGROUND_COLOR_GREEN);
        ui->btn_motor_stop->setStyleSheet(BACKGROUND_COLOR_BLACK);
        ui->btn_motor_f->setStyleSheet(BACKGROUND_COLOR_BLACK);
        serial_server->writeToSerial(Motor::MSG_MOTOR_BACK);
        motor->setState(2);
    }
}
