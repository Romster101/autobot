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
    if(size > 1){
        int xEnd = item->pos().x();
        int yEnd = item->pos().y();
        int prevElNum = item->getElementNumber()-2;
        int xBegin = robItemsVector.at(prevElNum)->pos().x();
        int yBegin = robItemsVector.at(prevElNum)->pos().y();
        ArrowItem* arrow = new ArrowItem(xBegin,yBegin,xEnd,yEnd);
        item->setArrowIN(arrow); // входящая стрелка для айтема
        item->setArrowExists(true); 
        addItem(arrow);
    }
    item->setCallbackFunc([this,item](int elNum,int x,int y){
        // здесь описываем что делать при перетаскивании элемента
        adjustLinesForElement(elNum,x,y);
        emit propertiesChanged(x,y,item->getTheta(),item->getCargoOut()); // сигнал для отображения x,y в окне
    });
}

void ExtendedScene::adjustLinesForElement(int elNum,int x,int y)
{
    auto i = elNum-1;
        auto size = robItemsVector.size();
        if(size>1){ // если больше 1 элемента 
            if(elNum == 1){ // и двигаем первый элемент
                robItemsVector[i+1]->getArrowINptr()->setXbegin(x);
                robItemsVector[i+1]->getArrowINptr()->setYbegin(y);
            } else if (elNum == size) { // и двигаем последний
                robItemsVector[i]->getArrowINptr()->setXend(x);
                robItemsVector[i]->getArrowINptr()->setYend(y);
            } else { // если двигаем внутренний элемент контура
                robItemsVector[i]->getArrowINptr()->setXend(x);
                robItemsVector[i]->getArrowINptr()->setYend(y);
                robItemsVector[i+1]->getArrowINptr()->setXbegin(x);
                robItemsVector[i+1]->getArrowINptr()->setYbegin(y);
            }
        }   
}

void ExtendedScene::deleteSelectedItems()
{
    int minNum = robItemsVector.size(); // минимальный номер элемента, после которого мы обновляем индексы 
    int minN = robItemsVector.size()-1; // минимальный номер удаленного элемента
    auto oldRobItemsVector = robItemsVector; // вектор до удаления 
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
                            robItemsVector.remove(it-std::begin(robItemsVector));
                        }
                    }
            }
            removeItem(item);
            delete item;

            // в деструкторе itemа предусмотрено удаление входящей стрелки при ее наличии
            if (i == 0 && oldRobItemsVector.size()>1){ // если удален первый элемент при нескольких сущ
                delete oldRobItemsVector[i+1]->getArrowINptr();
                oldRobItemsVector[i+1]->setArrowExists(false);
            } else if (i != oldRobItemsVector.size()-1 && i!=0){ // если удален средний элемент 
                delete oldRobItemsVector[i+1]->getArrowINptr();
                int xBegin = oldRobItemsVector[i-1]->pos().x();
                int yBegin = oldRobItemsVector[i-1]->pos().y();
                int xEnd = oldRobItemsVector[i+1]->pos().x();
                int yEnd = oldRobItemsVector[i+1]->pos().y();
                ArrowItem* arrow = new ArrowItem(xBegin,yBegin,xEnd,yEnd);
                oldRobItemsVector[i+1]->setArrowIN(arrow); 
                addItem(arrow);
            } 
            oldRobItemsVector = robItemsVector;
            }
            // теперь начиная с минимального значения номера элемента, будем обновлять все следующие номера
            auto size = robItemsVector.size();
            for (int i = minNum-1; i < size; i++) 
                robItemsVector[i]->setData(NumberField,i+1);
    }
}

void ExtendedScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    if(!active)
        return;
    emit targetCoordinate(event->scenePos());
    QGraphicsScene::mouseMoveEvent(event);
}

void ExtendedScene::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event)
{
    if(!active)
        return;
    emit dblClicked(event->scenePos());
}

void ExtendedScene::keyPressEvent(QKeyEvent *keyEvent)
{
    if(!active)
        return;
    if (keyEvent->key() == Qt::Key_Delete)
        deleteSelectedItems();
    if (keyEvent->key() == Qt::Key_A && keyEvent->modifiers() == Qt::ControlModifier){
        for(GraphicsRobItem* item: robItemsVector)
            item->setSelected(true);
    }
}
