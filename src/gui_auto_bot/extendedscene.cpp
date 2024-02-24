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
    int minN = robItemsVector.size()-1; // минимальный номер удаленного элемента
    auto oldRobItemsVector = robItemsVector; // вектор до удаления 
    //const int lastN;
    if(minNum > 0){
            foreach (QGraphicsItem *item, selectedItems())
            {
            int i = 0; 
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
                            i = it-std::begin(robItemsVector); // номер элемента для удаления из вектора 

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

            if(i!=0 && i!=oldRobItemsVector.size()-1){
                int xBegin = oldRobItemsVector[i-1]->pos().x();
                int yBegin = oldRobItemsVector[i-1]->pos().y();

                int xEnd = oldRobItemsVector[i+1]->pos().x();
                int yEnd = oldRobItemsVector[i+1]->pos().y();

                ArrowItem* arrow = new ArrowItem(xBegin,yBegin,xEnd,yEnd);
                oldRobItemsVector[i-1]->setArrowOUT(arrow); 
                oldRobItemsVector[i+1]->setArrowIN(arrow); 
                addItem(arrow);
            
            }
            oldRobItemsVector = robItemsVector;
            }
        }
        // теперь начиная с минимального значения номера элемента, будем обновлять все следующие номера
        auto size = robItemsVector.size();
        for (int i = minNum-1; i < size; i++) 
            robItemsVector[i]->setData(NumberField,i+1);
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
    if (keyEvent->key() == Qt::Key_A && keyEvent->modifiers() == Qt::ControlModifier){
        for(GraphicsRobItem* item: robItemsVector){
            item->setSelected(true);
        }
    }
}
