#ifndef ARROW_H
#define ARROW_H

#include <QPolygon>
#include <QPointF>
#include <QGraphicsItem>
#include <qpainter.h>
#include <qmath.h>

class ArrowItem : public QGraphicsItem 
{
public:
    ArrowItem(int Xbegin,int Ybegin,int Xend,int Yend);
    QPolygon polygon;
    ~ArrowItem(){};

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

