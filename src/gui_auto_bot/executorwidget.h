#ifndef EXECUTORWIDGET_H
#define EXECUTORWIDGET_H

#include <QWidget>
#include <QTimer>
#include "messager.h"
#include "extendedscene.h"

namespace Ui {
class ExecutorWidget;
}

enum State{
    Paused,
    Processing,
    Stopped
};

class ExecutorWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ExecutorWidget(ExtendedScene* _scene,QWidget *parent = nullptr);
    ~ExecutorWidget();

    void setCurState(const State _s);
    void showCurrentArrow();
    const State getCurState() { return curState; };

    const int getTargetPoint() { return targetPointNum; };
    void setTargetPoint(const int _pointNum){this->targetPointNum = _pointNum;};

private:
    Ui::ExecutorWidget *ui;
    ExtendedScene* scene;
    State curState = Stopped;
    QTimer* timer;
    
    int targetPointNum = 1;
    void setRobotGoToPoint(int pointNum);

private slots:
    void on_pb_execute_clicked();
    void on_pb_stop_clicked();

    void blindTargetLine();
};

#endif // EXECUTORWIDGET_H
