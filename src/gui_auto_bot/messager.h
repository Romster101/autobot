#ifndef MESSAGER_H
#define MESSAGER_H

#include <QObject>

class Messager : public QObject
{
    Q_OBJECT
public:
    static Messager* instance(){
        static Messager m;
        return &m;
    };

    void sendMessage(QString msg){
        emit infoMessage(msg);
    };

signals:
    void infoMessage(QString msg);

private:
    Messager() = default;
    ~Messager() = default;

};

#endif // MESSAGER_H