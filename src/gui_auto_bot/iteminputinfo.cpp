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

void ItemInputInfo::on_pb_cancel_clicked()
{
    done(QDialog::Rejected);
}

void ItemInputInfo::on_pb_confirm_clicked()
{
    done(QDialog::Accepted);
}
