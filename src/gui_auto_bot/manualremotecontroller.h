#ifndef MANUALREMOTECONTROLLER_H
#define MANUALREMOTECONTROLLER_H

#include <QDialog>

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

private:
    Ui::manualRemoteController *ui;

private slots:
    void on_pb_back_clicked();
    void on_pb_forward_clicked();
    void on_pb_rotatePlus_clicked();
    void on_pb_rotateMinus_clicked();
};

#endif // MANUALREMOTECONTROLLER_H
