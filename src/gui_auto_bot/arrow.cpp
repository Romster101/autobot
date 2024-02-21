#include "arrow.h"

ArrowItem::ArrowItem(int Xbegin, int Ybegin, int Xend, int Yend)
{
    this->Xbegin = Xbegin;
    this->Ybegin = Ybegin;
    this->Xend = Xend;
    this->Yend = Yend;
}

void ArrowItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPen pen(QColor("#b42afe"),1);

    int arrowWidth = 10;
    int arrowHeight = 30;
    polygon << QPoint(0, -arrowWidth/2)
            << QPoint(arrowHeight, 0)
            << QPoint(0, arrowWidth/2);

    QPointF p0(Xbegin,Ybegin);
    QPointF p1(Xend,Yend);

    double dx = p1.x() - p0.x();
    double dy = p1.y() - p0.y();
    double angle = atan2(dy, dx);
    double lineLen = sqrt(dx*dx + dy*dy);

    if (lineLen<=arrowHeight){
        painter->save();
        painter->setPen(pen);
        painter->drawLine(p0, p1);
        painter->restore();
    } else {
        double dx1 = lineLen*cos(angle)/2;
        double dy1 = lineLen*sin(angle)/2;
        QPointF p2(p0.x() + dx1 - arrowHeight * cos(angle),
                p0.y() + dy1 - arrowHeight * sin(angle));
        painter->save();
        painter->setPen(pen);
        if(lineLen/2 >= arrowHeight)
        painter->drawLine(p0, p2);
        painter->translate(p2);
        painter->rotate(180/3.14159 * angle);
        painter->drawConvexPolygon(polygon);
        painter->restore();

        painter->save();
        painter->setPen(pen);
        QPointF p3(p0.x()+dx1,p0.y()+dy1);
        if(lineLen/2 >= arrowHeight)
            painter->drawLine(p3,p1);
        painter->restore();
    }
}

QRectF ArrowItem::boundingRect() const
{
    return QRectF();
}
