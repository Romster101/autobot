#include "executorwidget.h"
#include "ui_executorwidget.h"

ExecutorWidget::ExecutorWidget(ExtendedScene* _scene,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ExecutorWidget)
{
    ui->setupUi(this);
    this->scene = _scene;
    timer = new QTimer();
    connect(timer,&QTimer::timeout,this,&ExecutorWidget::blindTargetLine);
}

ExecutorWidget::~ExecutorWidget()
{
    delete ui;
}

void ExecutorWidget::setCurState(const State _s)
{
     this->curState = _s;
        switch (_s)
        {
        case Processing:
        {
            scene->setActive(false);
            timer->start(500);
            break;
        }

        case Paused:
        {
            timer->stop();
            showCurrentArrow();
            scene->setActive(true);
            break;
        }

        case Stopped:
        {
            timer->stop();
            showCurrentArrow();
            scene->setActive(true);
            break;
        }

        default:
            break;
        }
}

void ExecutorWidget::showCurrentArrow()
{
    auto items = scene->getRobItemsVector();
    if (items.size() < 2)
        return;
    auto arrowPtr = items[targetPointNum]->getArrowINptr();
    scene->setActive(true);
    arrowPtr->show();
}

void ExecutorWidget::on_pb_stop_clicked()
{
     if(curState == Processing){
        ui->pb_execute->setIcon(QIcon(":/img/go.png"));
        ui->pb_stop->setIcon(QIcon(":/img/stopRed.png"));
        Messager::instance()->sendMessage("Движение окончено!");
        setCurState(Stopped);
        return;
    }
}

void ExecutorWidget::blindTargetLine()
{
    static bool hide = false;
    auto items = scene->getRobItemsVector();
    ArrowItem* arrowPtr = nullptr;
    if (items.size() > 1)
        arrowPtr = items[targetPointNum]->getArrowINptr();
    else 
        return;

    if (!hide){
        arrowPtr->hide();
        hide = true;
        return;
    }
    arrowPtr->show();
    hide = false;
}

void ExecutorWidget::on_pb_execute_clicked()
{
    if(curState == Processing){
        ui->pb_execute->setIcon(QIcon(":/img/go.png"));
        Messager::instance()->sendMessage("Движение остановлено!");
        setCurState(Paused);
        return;
    }
        
    ui->pb_execute->setIcon(QIcon(":/img/pausY.png"));
    ui->pb_stop->setIcon(QIcon(":/img/stop.png"));
    setRobotGoToPoint(targetPointNum);
    Messager::instance()->sendMessage("Начало движения!");
}

void ExecutorWidget::setRobotGoToPoint(int pointNum)
{
    setTargetPoint(pointNum);
    setCurState(Processing);
}
