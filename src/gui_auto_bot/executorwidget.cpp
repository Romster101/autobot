#include "executorwidget.h"
#include "ui_executorwidget.h"

ExecutorWidget::ExecutorWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ExecutorWidget)
{
    ui->setupUi(this);
}

ExecutorWidget::~ExecutorWidget()
{
    delete ui;
}

void ExecutorWidget::on_pb_stop_clicked()
{
     if(getCurState() == Processing){
        ui->pb_execute->setIcon(QIcon(":/img/go.png"));
        Messager::instance()->sendMessage("Движение окончено!");
        setCurState(Stopped);
        return;
    }

}

void ExecutorWidget::on_pb_execute_clicked()
{
    if(getCurState() == Processing){
        ui->pb_execute->setIcon(QIcon(":/img/go.png"));
        Messager::instance()->sendMessage("Движение остановлено!");
        setCurState(Paused);
        return;
    }
        
    ui->pb_execute->setIcon(QIcon(":/img/pause.png"));
    setCurState(Processing);
    Messager::instance()->sendMessage("Начало движения!");
}
