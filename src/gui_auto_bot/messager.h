#ifndef MESSAGER_H
#define MESSAGER_H

#include <QObject>
#include <QDateTime>

class Messager : public QObject
{
    Q_OBJECT
    
public:
    static Messager* instance(){
        static Messager m;
        return &m;
    };

    void sendMessage(QString msg){
        static int num = 1;
        msg = QString::number(num) + ") " + 
        QTime::currentTime().toString() + ": " + msg; 
        emit infoMessage(msg);
        num += 1;
    };

    Messager(Messager &m) = delete;
    Messager& operator=(Messager &m) = delete;
    
signals:
    void infoMessage(QString msg);

private:
    Messager() = default;
    ~Messager() = default;

};

#endif // MESSAGER_H