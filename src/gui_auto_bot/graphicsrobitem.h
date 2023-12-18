#ifndef GRAPHICSROBITEM_H
#define GRAPHICSROBITEM_H

#include <QGraphicsPixmapItem>
#include <QCursor>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include <QPainter>
#include <QMenu>
#include <QGraphicsScene>
#include <QGraphicsSceneContextMenuEvent>
#include <QObject>
#include <iteminputinfo.h>

class GraphicsRobItem : public QGraphicsPixmapItem
{
public:
    GraphicsRobItem(int x,int y,int theta = 0);

    int getTheta() {return theta;}

    void setTheta(int _theta) {this->theta = _theta;}

    void setRotationAngle(int angle);

private:
    int theta = 0;
    QPixmap pixmap;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

protected:
    void contextMenuEvent(QGraphicsSceneContextMenuEvent *event);

};

#endif 
