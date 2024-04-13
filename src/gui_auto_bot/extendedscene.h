#ifndef EXTENDEDSCENE_H
#define EXTENDEDSCENE_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsItem>
#include <graphicsrobitem.h>
#include <QKeyEvent>
#include <QVector>
#include <QColorDialog>

 enum ItemDataToSave{
        RotationField,
        CargoOutField,
        NumberField
    };
class ExtendedScene: public QGraphicsScene
{
    Q_OBJECT
public:
    explicit ExtendedScene(QObject *parent = nullptr);
    QVector<GraphicsRobItem *> getRobItemsVector() {return robItemsVector;};
    void clearItemsVector(){robItemsVector.clear();};
    void addRobItem(GraphicsRobItem* item);
    void adjustLinesForElement(int elNum,int x,int y);

    void setActive(const bool _active) {this->active = _active;};
    const bool isActive() {return active;};

private:
    QVector<GraphicsRobItem*> robItemsVector;
    void deleteSelectedItems();
    bool active = true;
    
signals:
    void targetCoordinate(QPointF point);
    void dblClicked(QPointF point);
    void propertiesChanged(int newX, int newY,int angle,bool cargoOut);

protected:
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event);
    void keyPressEvent(QKeyEvent* keyEvent);
};

#endif // EXTENDEDSCENE_H
