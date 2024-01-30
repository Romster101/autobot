#ifndef SERIALPORTDIALOG_H
#define SERIALPORTDIALOG_H

#include <QDebug>
#include <QDialog>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDateTime>
#include <QStringListModel>

QT_BEGIN_NAMESPACE
namespace Ui { class SerialPortDialog; }
QT_END_NAMESPACE

class SerialPortDialog : public QDialog
{
    Q_OBJECT
private:
    Ui::SerialPortDialog *ui;
    QSerialPort* serial;
    QStringList outputList;
    QStringListModel* model;
    QList<QSerialPortInfo> portsInfoList;

    void updateComPorts();

public:
   
    SerialPortDialog(QWidget *parent = nullptr);
    ~SerialPortDialog();
    void addOutPutMsg(QString msg);
    void show();
    QSerialPort* getSerialObject();

private slots:
    void on_pb_closePort_clicked();
    void on_pb_openPort_clicked();
    void on_pb_updatePorts_clicked();
    void serialReceive();
    void serialError(QSerialPort::SerialPortError err);
};
#endif // SERIALPORTDIALOG_H
