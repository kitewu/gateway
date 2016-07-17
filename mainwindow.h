#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDebug>
#include <QMainWindow>
#include <QByteArray>
#include <QString>

#include "serialservice.h"
#include "socketservice.h"
#include "temp_humi_light.h"
#include "motor.h"
#include "relays.h"
#include "touch.h"
#include "smoke.h"
#include "infray.h"
#include "shake.h"
#include "pwm.h"
#include "ultra.h"

#define BACKGROUND_COLOR_GREEN "background-color: rgb(0, 255, 0);"
#define BACKGROUND_COLOR_WHITE "background-color: rgb(255, 255, 255);"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void updateTempHumiLig();
    void changeMotor(int);
    void changeRelay(int);
    void changeSerial(int);
signals:
    void addLog(QString);

private slots:
    void processMsgFromSerial(QByteArray);

    void processMsgFromSocket(QString);

    void showLog(QString);

    void changePwm(int);

    void on_btn_motor_f_clicked();

    void on_btn_motor_b_clicked();

    void on_btn_motor_stop_clicked();

    void on_btn_relay_clicked();

    void on_btn_serial_clicked();

private:
    Ui::MainWindow *ui;
    SerialService *serial_server;
    SocketService *socket_server;

    Temp_Humi_Light *temp_humi_light;
    Motor *motor;
    Relays *relays;
    Touch *touch;
    Smoke *smoke;
    InfRay *infray;
    Shake *shake;
    Pwm *pwm;
    Ultra * ultra;

    QPalette pe_red;
    QPalette pe_black;
};

#endif // MAINWINDOW_H
