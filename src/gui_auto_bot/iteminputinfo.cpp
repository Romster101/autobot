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

int ItemInputInfo::getAngle()
{
    return ui->sb_angle->value();
}

int ItemInputInfo::getX()
{
    return ui->sb_X->value();
}

int ItemInputInfo::getY()
{
    return ui->sb_Y->value();
}

void ItemInputInfo::setX(int x)
{
    ui->sb_X->setValue(x);
}

void ItemInputInfo::setY(int y)
{
    ui->sb_Y->setValue(y);
}

void ItemInputInfo::setAngle(int angle)
{
    ui->sb_angle->setValue(angle);
}

void ItemInputInfo::on_pb_cancel_clicked()
{
    done(QDialog::Rejected);
}

void ItemInputInfo::on_pb_confirm_clicked()
{
    done(QDialog::Accepted);
}
