#ifndef ITEMINPUTINFO_H
#define ITEMINPUTINFO_H

#include <QDialog>

namespace Ui {
class ItemInputInfo;
}

class ItemInputInfo : public QDialog
{
    Q_OBJECT

public:
    explicit ItemInputInfo(QWidget *parent = nullptr);
    ~ItemInputInfo();

    int getAngle();
    int getX();
    int getY();

    void setX(int x);
    void setY(int y);
    void setAngle(int angle);

private:
    Ui::ItemInputInfo *ui;

private slots:
    void on_pb_confirm_clicked();
    void on_pb_cancel_clicked();
};

#endif // ITEMINPUTINFO_H
