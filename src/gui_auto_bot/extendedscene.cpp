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
    auto size = robItemsVector.size();
    item->setElementNumber(size);
        // если положений больше 1, то добавляем линию
       if(getRobItemsVector().size() > 1){
        int xEnd = item->pos().x();
        int yEnd = item->pos().y();
        int prevElNum = item->getElementNumber()-2;
        int xBegin = robItemsVector.at(prevElNum)->pos().x();
        int yBegin = robItemsVector.at(prevElNum)->pos().y();
        ArrowItem* arrow = new ArrowItem(xBegin,yBegin,xEnd,yEnd);
        item->setArrowIN(arrow); // входящая стрелка для айтема 
        robItemsVector.at(prevElNum)->setArrowOUT(arrow); // является выходящей для предыдущего айтема
        addItem(arrow);
    }
}

void ExtendedScene::deleteSelectedItems()
{
    int minNum = robItemsVector.size(); // минимальный номер элемента, после которого мы обновляем индексы 
    int maxN = 0; // максимальный номер удаленного элемента
    int minN = robItemsVector.size()-1; // минимальный номер удаленного элемента
    auto oldRobItemsVector = robItemsVector; // вектор до удаления 
    if(minNum > 0){
            foreach (QGraphicsItem *item, selectedItems())
        {
            int num = item->data(NumberField).toInt();
            if(num < minNum) // если номер текущего элемента меньше минимального,
            // после которого надо обновлять все следующие номера, то обновим минимальный 
            minNum = num;
            // удаляем этот элемент в векторе (сравнение делаем по номеру)
            for (GraphicsRobItem* grbItem: robItemsVector){
                if (grbItem->getElementNumber() == item->data(NumberField).toInt())
                    {
                        auto it = std::find(std::begin(robItemsVector),std::end(robItemsVector),grbItem);
                        if (it!= std::end(robItemsVector)){
                            int i = it-std::begin(robItemsVector); // номер элемента для удаления из вектора 
                            
                            if (maxN < i)
                                maxN = i;

                            if (minN > i)
                                minN = i;

                            if (i+1 < robItemsVector.size())
                                robItemsVector[i+1]->setArrowIN(nullptr); // чтобы второй указатель не содержал мусор
                            
                            if (i-1 >= 0)
                                robItemsVector[i-1]->setArrowOUT(nullptr); // чтобы второй указатель не содержал мусор
                            
                            robItemsVector.remove(it-std::begin(robItemsVector));
                        }
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
            qDebug() << minN << maxN;

    if ((minN != 0) && (maxN!=oldRobItemsVector.size()-1) && oldRobItemsVector.size() > 2 && robItemsVector.size() > 1){ 
        qDebug() << minN << maxN;
        int xBegin = oldRobItemsVector[minN-1]->pos().x();
        int yBegin = oldRobItemsVector[minN-1]->pos().y();

        int xEnd = oldRobItemsVector[maxN+1]->pos().x();
        int yEnd = oldRobItemsVector[maxN+1]->pos().y();

        ArrowItem* arrow = new ArrowItem(xBegin,yBegin,xEnd,yEnd);
        oldRobItemsVector[minN-1]->setArrowOUT(arrow); 
        oldRobItemsVector[maxN+1]->setArrowIN(arrow); 
        addItem(arrow);
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
