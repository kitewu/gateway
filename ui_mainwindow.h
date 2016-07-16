/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Sat Jul 16 20:42:21 2016
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QPushButton *btn_open_serial;
    QPushButton *btn_close_serial;
    QFrame *frame_2;
    QPushButton *btn_motor_f;
    QPushButton *btn_motor_b;
    QPushButton *btn_motor_stop;
    QFrame *frame_3;
    QPushButton *btn_relay1_open;
    QPushButton *btn_relay1_close;
    QTextEdit *text_log;
    QFrame *frame_4;
    QLabel *label;
    QLabel *label_2;
    QLCDNumber *lcd_temp;
    QLCDNumber *lcd_humi;
    QLCDNumber *lcd_lig;
    QLabel *label_3;
    QFrame *frame_5;
    QLabel *label_4;
    QFrame *frame_7;
    QLabel *label_touch;
    QFrame *frame_6;
    QLabel *label_6;
    QFrame *frame_8;
    QLabel *label_fire;
    QFrame *frame_9;
    QLabel *label_5;
    QFrame *frame_10;
    QLabel *label_inf_ray;
    QFrame *frame_11;
    QLabel *label_7;
    QFrame *frame_12;
    QLabel *label_shake;
    QFrame *frame_13;
    QLabel *label_8;
    QPushButton *btn_pwm_open;
    QPushButton *btn_pwm_close;
    QSlider *horizontalSlider_pwm;
    QLabel *label_9;
    QFrame *frame_14;
    QLabel *label_10;
    QFrame *frame_15;
    QLabel *label_ultra;
    QLabel *label_11;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(676, 482);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 10, 120, 80));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        btn_open_serial = new QPushButton(frame);
        btn_open_serial->setObjectName(QString::fromUtf8("btn_open_serial"));
        btn_open_serial->setGeometry(QRect(10, 10, 92, 27));
        btn_close_serial = new QPushButton(frame);
        btn_close_serial->setObjectName(QString::fromUtf8("btn_close_serial"));
        btn_close_serial->setGeometry(QRect(10, 40, 92, 27));
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(10, 100, 120, 111));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        btn_motor_f = new QPushButton(frame_2);
        btn_motor_f->setObjectName(QString::fromUtf8("btn_motor_f"));
        btn_motor_f->setGeometry(QRect(10, 10, 92, 27));
        btn_motor_b = new QPushButton(frame_2);
        btn_motor_b->setObjectName(QString::fromUtf8("btn_motor_b"));
        btn_motor_b->setGeometry(QRect(10, 40, 92, 27));
        btn_motor_stop = new QPushButton(frame_2);
        btn_motor_stop->setObjectName(QString::fromUtf8("btn_motor_stop"));
        btn_motor_stop->setGeometry(QRect(10, 70, 92, 27));
        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(10, 230, 121, 91));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        btn_relay1_open = new QPushButton(frame_3);
        btn_relay1_open->setObjectName(QString::fromUtf8("btn_relay1_open"));
        btn_relay1_open->setGeometry(QRect(10, 10, 92, 27));
        btn_relay1_close = new QPushButton(frame_3);
        btn_relay1_close->setObjectName(QString::fromUtf8("btn_relay1_close"));
        btn_relay1_close->setGeometry(QRect(10, 50, 92, 27));
        text_log = new QTextEdit(centralWidget);
        text_log->setObjectName(QString::fromUtf8("text_log"));
        text_log->setGeometry(QRect(350, 10, 321, 401));
        frame_4 = new QFrame(centralWidget);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(140, 10, 201, 101));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 41, 17));
        label_2 = new QLabel(frame_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 40, 31, 17));
        lcd_temp = new QLCDNumber(frame_4);
        lcd_temp->setObjectName(QString::fromUtf8("lcd_temp"));
        lcd_temp->setGeometry(QRect(80, 10, 81, 23));
        lcd_humi = new QLCDNumber(frame_4);
        lcd_humi->setObjectName(QString::fromUtf8("lcd_humi"));
        lcd_humi->setGeometry(QRect(80, 40, 81, 23));
        lcd_lig = new QLCDNumber(frame_4);
        lcd_lig->setObjectName(QString::fromUtf8("lcd_lig"));
        lcd_lig->setGeometry(QRect(80, 70, 81, 23));
        label_3 = new QLabel(frame_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 70, 31, 17));
        frame_5 = new QFrame(centralWidget);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(140, 120, 201, 51));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 0, 71, 51));
        frame_7 = new QFrame(frame_5);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(100, 10, 71, 31));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        label_touch = new QLabel(frame_5);
        label_touch->setObjectName(QString::fromUtf8("label_touch"));
        label_touch->setGeometry(QRect(100, 10, 71, 31));
        frame_6 = new QFrame(centralWidget);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(140, 180, 201, 51));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(frame_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 0, 71, 51));
        frame_8 = new QFrame(frame_6);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setGeometry(QRect(100, 10, 71, 31));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        label_fire = new QLabel(frame_8);
        label_fire->setObjectName(QString::fromUtf8("label_fire"));
        label_fire->setGeometry(QRect(0, 6, 71, 21));
        frame_9 = new QFrame(centralWidget);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setGeometry(QRect(140, 240, 201, 51));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame_9);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 6, 91, 41));
        frame_10 = new QFrame(frame_9);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setGeometry(QRect(110, 10, 81, 31));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        label_inf_ray = new QLabel(frame_10);
        label_inf_ray->setObjectName(QString::fromUtf8("label_inf_ray"));
        label_inf_ray->setGeometry(QRect(0, 5, 81, 21));
        frame_11 = new QFrame(centralWidget);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setGeometry(QRect(140, 300, 201, 51));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(frame_11);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 6, 71, 41));
        frame_12 = new QFrame(frame_11);
        frame_12->setObjectName(QString::fromUtf8("frame_12"));
        frame_12->setGeometry(QRect(90, 10, 81, 31));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        label_shake = new QLabel(frame_12);
        label_shake->setObjectName(QString::fromUtf8("label_shake"));
        label_shake->setGeometry(QRect(0, 0, 81, 31));
        frame_13 = new QFrame(centralWidget);
        frame_13->setObjectName(QString::fromUtf8("frame_13"));
        frame_13->setGeometry(QRect(140, 360, 201, 51));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        label_8 = new QLabel(frame_13);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 0, 41, 31));
        btn_pwm_open = new QPushButton(frame_13);
        btn_pwm_open->setObjectName(QString::fromUtf8("btn_pwm_open"));
        btn_pwm_open->setGeometry(QRect(50, 0, 71, 21));
        btn_pwm_close = new QPushButton(frame_13);
        btn_pwm_close->setObjectName(QString::fromUtf8("btn_pwm_close"));
        btn_pwm_close->setGeometry(QRect(131, 0, 71, 21));
        horizontalSlider_pwm = new QSlider(frame_13);
        horizontalSlider_pwm->setObjectName(QString::fromUtf8("horizontalSlider_pwm"));
        horizontalSlider_pwm->setGeometry(QRect(40, 20, 161, 31));
        horizontalSlider_pwm->setOrientation(Qt::Horizontal);
        label_9 = new QLabel(frame_13);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(0, 30, 31, 20));
        frame_14 = new QFrame(centralWidget);
        frame_14->setObjectName(QString::fromUtf8("frame_14"));
        frame_14->setGeometry(QRect(10, 330, 120, 80));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        label_10 = new QLabel(frame_14);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 10, 81, 20));
        frame_15 = new QFrame(frame_14);
        frame_15->setObjectName(QString::fromUtf8("frame_15"));
        frame_15->setGeometry(QRect(10, 40, 101, 31));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        label_ultra = new QLabel(frame_15);
        label_ultra->setObjectName(QString::fromUtf8("label_ultra"));
        label_ultra->setGeometry(QRect(1, 6, 61, 21));
        label_11 = new QLabel(frame_15);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(70, 6, 31, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 676, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        btn_open_serial->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", 0, QApplication::UnicodeUTF8));
        btn_close_serial->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\344\270\262\345\217\243", 0, QApplication::UnicodeUTF8));
        btn_motor_f->setText(QApplication::translate("MainWindow", "\347\224\265\346\234\272\346\255\243\350\275\254", 0, QApplication::UnicodeUTF8));
        btn_motor_b->setText(QApplication::translate("MainWindow", "\347\224\265\346\234\272\345\217\215\350\275\254", 0, QApplication::UnicodeUTF8));
        btn_motor_stop->setText(QApplication::translate("MainWindow", "\347\224\265\346\234\272\345\201\234\346\255\242", 0, QApplication::UnicodeUTF8));
        btn_relay1_open->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\347\273\247\347\224\265\345\231\2501", 0, QApplication::UnicodeUTF8));
        btn_relay1_close->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\347\273\247\347\224\265\345\231\2501", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\346\270\251\345\272\246", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\346\271\277\345\272\246", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\344\272\256\345\272\246", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\350\247\246\346\221\270\344\274\240\346\204\237\345\231\250", 0, QApplication::UnicodeUTF8));
        label_touch->setText(QApplication::translate("MainWindow", "no touch", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "\347\203\237\351\233\276\344\274\240\346\204\237\345\231\250", 0, QApplication::UnicodeUTF8));
        label_fire->setText(QApplication::translate("MainWindow", "no smoke", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "\347\203\255\351\207\212\347\272\242\345\244\226\344\274\240\346\204\237\345\231\250", 0, QApplication::UnicodeUTF8));
        label_inf_ray->setText(QApplication::translate("MainWindow", "no signal", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "\346\214\257\345\212\250\344\274\240\346\204\237\345\231\250", 0, QApplication::UnicodeUTF8));
        label_shake->setText(QApplication::translate("MainWindow", "no shake", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "\350\260\203\345\205\211\347\201\257", 0, QApplication::UnicodeUTF8));
        btn_pwm_open->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", 0, QApplication::UnicodeUTF8));
        btn_pwm_close->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "\344\272\256\345\272\246", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "\350\266\205\345\243\260\346\263\242\344\274\240\346\204\237\345\231\250", 0, QApplication::UnicodeUTF8));
        label_ultra->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "mm", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
