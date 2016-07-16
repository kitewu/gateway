#ifndef TOUCH_H
#define TOUCH_H

#include <QObject>

class Touch : public QObject
{
    Q_OBJECT
public:
    explicit Touch(QObject *parent = 0);
    void setTouchState(int);
    int getTouchState();
signals:
    
public slots:

private:
    int touch_state;
public:
    const static QByteArray MSG_TOUCH;
    const static QByteArray MSG_NO_TOUCH;
};

#endif // TOUCH_H
