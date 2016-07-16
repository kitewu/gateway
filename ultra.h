#ifndef ULTRA_H
#define ULTRA_H

#include <QObject>

class Ultra : public QObject
{
    Q_OBJECT
public:
    explicit Ultra(QObject *parent = 0);
    void setLength(int);
    int getLength();
signals:
    
public slots:

private:
    int length;
};

#endif // ULTRA_H
