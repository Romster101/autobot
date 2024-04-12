#ifndef EXECUTORWIDGET_H
#define EXECUTORWIDGET_H

#include <QWidget>
#include "messager.h"

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
    explicit ExecutorWidget(QWidget *parent = nullptr);
    ~ExecutorWidget();

    void setCurState(const State s){this->curState = s;}
    const State getCurState(){return curState;};

private:
    Ui::ExecutorWidget *ui;

    State curState = Stopped;

private slots:
    void on_pb_execute_clicked();
    void on_pb_stop_clicked();
};

#endif // EXECUTORWIDGET_H
