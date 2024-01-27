#include "extendedscene.h"

ExtendedScene::ExtendedScene(QObject *parent)
    : QGraphicsScene{parent}
{
   
}

void ExtendedScene::deleteSelectedItems()
{
    int minNum = items().size(); // минимальный номер элемента, после которого мы обновляем индексы 
    if(minNum > 0){
            foreach (QGraphicsItem *item, this->selectedItems())
        {
            int num = item->data(NumberField).toInt();
            if(num < minNum) // если номер текущего элемента меньше минимального,
            // после которого надо обновлять все следующие номера, то обновим минимальный 
                minNum = num;
            this->removeItem(item);
            delete item;
        }
        // теперь начиная с минимального значения номера элемента, будем обновлять все следующие номера
        auto size = items().size();
        auto itemsList = items(Qt::AscendingOrder);
        for (int i = minNum-1; i < size; i++) {
            itemsList[i]->setData(NumberField,i+1);
        }
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
        deleteSelectedItems();
}
