#ifndef SERIALPORTDIALOG_H
#define SERIALPORTDIALOG_H

#include <QDialog>

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
};
#endif // SERIALPORTDIALOG_H
