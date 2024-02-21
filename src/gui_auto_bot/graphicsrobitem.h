#ifndef GRAPHICSROBITEM_H
#define GRAPHICSROBITEM_H

#include <QGraphicsItem>
#include <QCursor>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include <QPainter>
#include <QMenu>
#include <QGraphicsScene>
#include <QGraphicsSceneContextMenuEvent>
#include <QObject>
#include <iteminputinfo.h>
#include <QPixmap>
#include <QRectF>
#include <qmath.h>
#include "arrow.h"
class GraphicsRobItem : public QGraphicsItem
{
public:
    GraphicsRobItem(int x,int y,int theta = 0,bool cargo_out = false);
    ~GraphicsRobItem(){};

    enum ItemDataToSave{
        RotationField,
        CargoOutField,
        NumberField
    };

    //_____________________Геттеры и сеттеры_________________

    int getTheta() const {return data(RotationField).toInt();}
    void setTheta(int const &_theta) {setData(RotationField,_theta);}

    bool getCargoOut() const {return data(CargoOutField).toBool();};
    void setCargoOut(bool const &_cargo_out) {setData(CargoOutField,_cargo_out);};

    int getElementNumber() const {return data(NumberField).toInt();};
    void setElementNumber(int const &_number) {setData(NumberField,_number);}; 

private:
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;

    ArrowItem* arrowIN = nullptr;
    ArrowItem* arrowOUT = nullptr;

protected:
    void contextMenuEvent(QGraphicsSceneContextMenuEvent *event) override;
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget) override;

};

#endif 
