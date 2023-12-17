#ifndef SERIALPORTDIALOG_H
#define SERIALPORTDIALOG_H

#include <QDialog>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

QT_BEGIN_NAMESPACE
namespace Ui { class SerialPortDialog; }
QT_END_NAMESPACE

class SerialPortDialog : public QDialog
{
    Q_OBJECT

public:
    SerialPortDialog(QWidget *parent = nullptr);
    ~SerialPortDialog();

private:
    Ui::SerialPortDialog *ui;

private slots:
    void on_pb_closePort_clicked();
    void on_pb_openPort_clicked();
};
#endif // SERIALPORTDIALOG_H
