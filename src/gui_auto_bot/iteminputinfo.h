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

    int getAngle() const;
    int getX() const;
    int getY() const;
    bool getCargo_out() const;

    void setX(int const &_x);
    void setY(int const &_y);
    void setAngle(int const &_angle);
    void setCargo_Out(bool const &_cargo_out);

private:
    Ui::ItemInputInfo *ui;

private slots:
    void on_pb_confirm_clicked();
    void on_pb_cancel_clicked();
};

#endif // ITEMINPUTINFO_H
