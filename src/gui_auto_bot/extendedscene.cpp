#include "extendedscene.h"
#include "arrow.h"

ExtendedScene::ExtendedScene(QObject *parent)
    : QGraphicsScene{parent}
{
 
}

void ExtendedScene::addRobItem(GraphicsRobItem *item)
{
    addItem(item);
    robItemsVector.append(item);
    item->setElementNumber(robItemsVector.size());
       if(getRobItemsVector().size() > 1){
        int xEnd = item->pos().x();
        int yEnd = item->pos().y();
        int prevElNum = item->getElementNumber()-2;
        int xBegin = robItemsVector.at(prevElNum)->pos().x();
        int yBegin = robItemsVector.at(prevElNum)->pos().y();
        qDebug() << xBegin << yBegin << xEnd << yEnd;
        ArrowItem* arrow = new ArrowItem(xBegin,yBegin,xEnd,yEnd);
        arrow->setData(NumberField,item->getElementNumber());
        addItem(arrow);
    }
}

void ExtendedScene::deleteSelectedItems()
{
    int minNum = robItemsVector.size(); // минимальный номер элемента, после которого мы обновляем индексы 
    if(minNum > 0){
            foreach (QGraphicsItem *item, selectedItems())
        {
            int num = item->data(NumberField).toInt();
            if(num < minNum) // если номер текущего элемента меньше минимального,
            // после которого надо обновлять все следующие номера, то обновим минимальный 
            minNum = num;
            // удаляем этот элемент в векторе (сравнение делаем по вектору)
            for (GraphicsRobItem* grbItem: robItemsVector){
                if (grbItem->getElementNumber() == item->data(NumberField).toInt())
                    {
                        auto it = std::find(std::begin(robItemsVector),std::end(robItemsVector),grbItem);
                        if (it!= std::end(robItemsVector))
                            robItemsVector.remove(it-std::begin(robItemsVector));
                    }
            }
            removeItem(item);
            delete item;
        }
        // теперь начиная с минимального значения номера элемента, будем обновлять все следующие номера
        auto size = robItemsVector.size();
        for (int i = minNum-1; i < size; i++) 
            robItemsVector[i]->setData(NumberField,i+1);
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
