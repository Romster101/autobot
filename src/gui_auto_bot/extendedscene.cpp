#include "extendedscene.h"

ExtendedScene::ExtendedScene(QObject *parent)
    : QGraphicsScene{parent}
{
    GraphicsRobItem* item = new GraphicsRobItem(0,0,0);
    addItem(item);
    item->addNumber(items().size());
}

void ExtendedScene::deleteSelectedItems()
{
    foreach (QGraphicsItem *item, this->selectedItems())
    {
        this->removeItem(item);
        delete item;
    }
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

void ExtendedScene::keyPressEvent(QKeyEvent *keyEvent)
{
    if (keyEvent->key() == Qt::Key_Delete)
    {
        deleteSelectedItems();
    }
}
