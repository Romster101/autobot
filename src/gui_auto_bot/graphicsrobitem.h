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
#include <functional>
class GraphicsRobItem : public QGraphicsItem
{
public:
    GraphicsRobItem(int x,int y,int theta = 0,bool cargo_out = false);
    ~GraphicsRobItem()
    {
        if (arrowExists)
            delete arrowIN;
    };

    enum ItemDataToSave{
        RotationField,
        CargoOutField,
        NumberField
    };


    int getTheta() const {return data(RotationField).toInt();}
    void setTheta(int const &_theta) {setData(RotationField,_theta);}

    bool getCargoOut() const {return data(CargoOutField).toBool();};
    void setCargoOut(bool const &_cargo_out) {setData(CargoOutField,_cargo_out);};

    int getElementNumber() const {return data(NumberField).toInt();};
    void setElementNumber(int const &_number) {setData(NumberField,_number);};

    void setCallbackFunc(std::function<void(int,int,int)> _func);

    bool getArrowExists() {return arrowExists;}
    void setArrowExists(bool const &_exists) {this->arrowExists = _exists;};

    void setArrowIN(ArrowItem* _arrowIN){this->arrowIN = _arrowIN;};
    ArrowItem* getArrowINptr(){return arrowIN;};

private:
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
    std::function<void(int,int,int)> callback;
    ArrowItem* arrowIN;
    bool arrowExists = false;

protected:
    void contextMenuEvent(QGraphicsSceneContextMenuEvent *event) override;
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget) override;
};

#endif 
