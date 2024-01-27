#include "iteminputinfo.h"
#include "ui_iteminputinfo.h"

ItemInputInfo::ItemInputInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ItemInputInfo)
{
    ui->setupUi(this);
}

ItemInputInfo::~ItemInputInfo()
{
    delete ui;
}

int ItemInputInfo::getAngle() const
{
    return ui->sb_angle->value();
}

int ItemInputInfo::getX() const
{
    return ui->sb_X->value(); 
}

int ItemInputInfo::getY() const
{
    return ui->sb_Y->value();
}

bool ItemInputInfo::getCargo_out() const
{
    return ui->chb_cargo_out->isChecked();
}

void ItemInputInfo::setX(int const &_x)
{
    ui->sb_X->setValue(_x);
}

void ItemInputInfo::setY(int const &_y)
{
    ui->sb_Y->setValue(_y);
}

void ItemInputInfo::setAngle(int const &_angle)
{
    ui->sb_angle->setValue(_angle);
}

void ItemInputInfo::setCargo_Out(bool const &_cargo_out)
{
    ui->chb_cargo_out->setChecked(_cargo_out);
}

void ItemInputInfo::on_pb_cancel_clicked()
{
    done(QDialog::Rejected);
}

void ItemInputInfo::on_pb_confirm_clicked()
{
    done(QDialog::Accepted);
}
