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
#include <QtGui>
class GraphicsRobItem : public QGraphicsItem
{
public:
    GraphicsRobItem(int x,int y,int theta = 0);
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
    //_____________________Основные параметры положения_________________

    /// Угол поворота робота в данном положении
    int theta = 0;
    /// Выгружаем ли мы груз 
    bool cargo_out = false; 

    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

protected:
    void contextMenuEvent(QGraphicsSceneContextMenuEvent *event);
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget) override;

};

#endif 
