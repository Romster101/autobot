#ifndef ARROW_H
#define ARROW_H

#include <QPolygon>
#include <QPointF>
#include <QGraphicsItem>
#include <qpainter.h>
#include <qmath.h>
#include <QDebug>
class ArrowItem : public QGraphicsItem 
{
public:
    ArrowItem(int Xbegin,int Ybegin,int Xend,int Yend);
    QPolygon polygon;
    ~ArrowItem(){};

    void setXbegin(int const &_Xbegin) {this->Xbegin = _Xbegin;}
    void setYbegin(int const &_Ybegin) {this->Ybegin = _Ybegin;}
    void setXend(int const &_Xend) {this->Xend = _Xend;}
    void setYend(int const &_Yend) {this->Yend = _Yend;}

private:
    int Xbegin; 
    int Ybegin; 
    int Xend;
    int Yend;

protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget) override;
    QRectF boundingRect() const override;
};

#endif 

