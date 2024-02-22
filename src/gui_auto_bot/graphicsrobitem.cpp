#include "graphicsrobitem.h"
#include <qglobal.h>
#include <QColorDialog>

GraphicsRobItem::GraphicsRobItem(int x, int y, int theta, bool cargo_out)
{
    arrowIN = nullptr;
    arrowOUT = nullptr;
    setTransformOriginPoint(35,35); // задаем точку вращения
    setPos(x,-y); // за счет направления оси У 
    setTheta(theta);
    setCargoOut(cargo_out);
    setFlags(QGraphicsItem::ItemIsSelectable|ItemIsMovable);
};

void GraphicsRobItem::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    setCursor(QCursor(Qt::ClosedHandCursor));
    QGraphicsItem::mousePressEvent(event);
}

void GraphicsRobItem::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    setCursor(QCursor(Qt::ArrowCursor));
    QGraphicsItem::mouseReleaseEvent(event);
}

void GraphicsRobItem::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    if(arrowIN!=nullptr){
        arrowIN->setXend(pos().x());
        arrowIN->setYend(pos().y());
    }

    if(arrowOUT!=nullptr){
        arrowOUT->setXbegin(pos().x());
        arrowOUT->setYbegin(pos().y());
    }
    QGraphicsItem::mouseMoveEvent(event);
}

void GraphicsRobItem::contextMenuEvent(QGraphicsSceneContextMenuEvent *event)
{
    QMenu menu;
    menu.addAction("Редактор свойств элемента");
    QAction *a = menu.exec(event->screenPos());
    if (a == nullptr) return;
    if (a->text() == "Редактор свойств элемента")
    {
        ItemInputInfo info;
        info.setWindowTitle("Редактирование свойств элемента");
        info.setAngle(getTheta());
        info.setX(this->pos().x());
        info.setY(-this->pos().y());
        info.setCargo_Out(getCargoOut());

        switch (info.exec())
        {
        case QDialog::Accepted:
        {
            setPos(info.getX(), -info.getY());
            setTheta(info.getAngle());
            setCargoOut(info.getCargo_out());
            break;
        }
        case QDialog::Rejected:
        {
            break;
        }
        default:
            break;
        }
    }
}

QRectF GraphicsRobItem::boundingRect() const
{
    // задаем левую верхнюю точку и размеры элемента
    return QRectF(0,0,80,100); 
}

void GraphicsRobItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
   painter->save();
//__________________Создание повернутой стрелки____________________
    QPixmap pixmap1(":/img/strelka.png");
    //setTransformOriginPoint(35,35); // задаем точку вращения
    int pxw = pixmap1.width(); 
    int pxh = pixmap1.height();
    QMatrix rm1;
    rm1.rotate(90-getTheta()); // поворачиваем стрелку на угол theta 
    pixmap1 = pixmap1.transformed(rm1);
    // копируем для сохранения размеров 
    pixmap1 = pixmap1.copy((pixmap1.width() - pxw)/2, (pixmap1.height() - pxh)/2, pxw, pxh);  
    painter->drawPixmap(0,0,80,80,pixmap1); // рисуем стрелку 

//__________________Создание рамки____________________
   QPen pen(Qt::gray, 1);
   painter->setPen(pen);   
   painter->drawRect(boundingRect());


//__________________Создание значка выгрузки____________________
    if (getCargoOut()){
            QPixmap pixmap2(":/img/rolik.png");
            painter->drawPixmap(10,0,30,30,pixmap2); // рисуем значок выгрузки 
    }

//__________________Создание точки,точно определяющей положение____________________
   painter->setPen(QPen(Qt::red,5));
   painter->drawPoint(1,1);
   painter->restore();

//__________________Создание номера элемента____________________
   painter->save();
   painter->setFont(QFont("Times", 12, QFont::Bold));
   painter->drawText(35,95,QString::number(getElementNumber())); 
   painter->restore();

//__________________Рамка другого цвета при выборе____________________
   if (isSelected()){
        painter->save();
        QPen pen(QColor(254,168,54), 2);
        painter->setPen(pen);   
        painter->drawRect(boundingRect());
        painter->restore();
   }
}
