#ifndef SERIALPORTDIALOG_H
#define SERIALPORTDIALOG_H

#include <QDebug>

#include <QDialog>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDateTime>

QT_BEGIN_NAMESPACE
namespace Ui { class SerialPortDialog; }
QT_END_NAMESPACE

class SerialPortDialog : public QDialog
{
    Q_OBJECT
private:
    Ui::SerialPortDialog *ui;
    QSerialPort* serial;
    QList<QSerialPortInfo> portsInfoList;

public:
    SerialPortDialog(QWidget *parent = nullptr);
    ~SerialPortDialog();


private slots:
    void on_pb_closePort_clicked();
    void on_pb_openPort_clicked();
    void serialReceive();
    void serialError(QSerialPort::SerialPortError err);
};
#endif // SERIALPORTDIALOG_H
