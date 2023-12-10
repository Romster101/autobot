#include "extendedscene.h"

ExtendedScene::ExtendedScene(QObject *parent)
        :QGraphicsScene{parent}
{

}

void ExtendedScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    emit targetCoordinate(event->scenePos());
    QGraphicsScene::mouseMoveEvent(event);
}

void ExtendedScene::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event)
{
    emit dblClicked(event->scenePos());
}