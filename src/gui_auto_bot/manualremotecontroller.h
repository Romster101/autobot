#ifndef MANUALREMOTECONTROLLER_H
#define MANUALREMOTECONTROLLER_H

#include <QDialog>
#include <QSerialPort>
#include <QDebug>
namespace Ui
{
    class manualRemoteController;
}

class ManualRemoteController : public QDialog
{
    Q_OBJECT

public:
    explicit ManualRemoteController(QWidget *parent = nullptr);
    ~ManualRemoteController();

    void setSerialObject(QSerialPort* port);

private:
    Ui::manualRemoteController *ui;
    QSerialPort *serial;

private slots:
    void on_pb_back_clicked();
    void on_pb_back_pressed();
    void on_pb_forward_clicked();
    void on_pb_rotatePlus_clicked();
    void on_pb_rotateMinus_clicked();
    void on_pb_forward_pressed();
    void on_pb_rotatePlus_pressed();
    void on_pb_rotateMinus_pressed();
};

#endif // MANUALREMOTECONTROLLER_H
