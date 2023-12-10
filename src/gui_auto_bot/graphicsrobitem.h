#ifndef GRAPHICSROBITEM_H
#define GRAPHICSROBITEM_H

#include <QGraphicsPixmapItem>
#include <QCursor>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include <QPainter>
#include "extendedscene.h"

class GraphicsRobItem : public QGraphicsPixmapItem
{
public:
    GraphicsRobItem(int x,int y,int theta = 0);

    int getX() {return x;}
    int getY() {return y;}
    int getTheta() {return theta;}

    void setX(int _x) {this->x = _x;}
    void setY(int _y) {this->y = _y;}
    void setTheta(int _theta) {this->theta = _theta;}

    void setRotationAngle(int angle);

private:
    int x;
    int y;
    int theta = 0;
    QPixmap pixmap;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

// protected:
//     virtual void paint ( QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0 ) override;
};

#endif 
