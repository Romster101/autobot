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
    ~GraphicsRobItem()
    {
        if(arrowIN!=nullptr)
            delete arrowIN;
        if(arrowOUT!=nullptr)
            delete arrowOUT;
        };

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


// НАДО ПОДУМАТЬ КАК ПРАВИЛЬНО СДЕЛАТЬ ГЕТТЕРЫ И СЕТТЕРЫ
    void setArrowOUT(ArrowItem* _arrowOUT){this->arrowOUT = _arrowOUT;};
    void setArrowIN(ArrowItem* _arrowIN){this->arrowIN = _arrowIN;};

    ArrowItem* getArrowINptr(){return arrowIN;};
    ArrowItem* getArrowOUTptr(){return arrowOUT;};
//---------------------------------------------------------------------------

private:
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;

    ArrowItem* arrowIN;
    ArrowItem* arrowOUT;

protected:
    void contextMenuEvent(QGraphicsSceneContextMenuEvent *event) override;
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget) override;

};

#endif 
