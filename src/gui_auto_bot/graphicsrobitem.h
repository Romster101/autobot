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
#include <QGraphicsTextItem>

class GraphicsRobItem : public QGraphicsPixmapItem
{
public:
    GraphicsRobItem(int x,int y,int theta = 0);
    ~GraphicsRobItem(){delete itemNumberText;};

    int getTheta() {return theta;}

    void setTheta(int _theta) {this->theta = _theta;}

    void setRotationAngle(int angle);

    void addNumber(int num);

    void setNumber(int num);

    void updateNumberPos();

private:
    int theta = 0;
    QPixmap pixmap;
    QGraphicsTextItem* itemNumberText;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

protected:
    void contextMenuEvent(QGraphicsSceneContextMenuEvent *event);

};

#endif 
