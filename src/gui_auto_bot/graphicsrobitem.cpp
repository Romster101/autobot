#include "graphicsrobitem.h"
#include <qglobal.h>

GraphicsRobItem::GraphicsRobItem(int x, int y, int theta)
{
    QPixmap pix1(":/img/strelka.png");
    pix1.setDevicePixelRatio(1);
    setPixmap(pix1);
    setPos(x, y);
    setTheta(theta);
    setOffset(-pix1.width() / 2, -pix1.height() / 2);
    setRotationAngle(theta);
    setFlags(QGraphicsItem::ItemIsSelectable | ItemIsFocusable | ItemIsMovable);
};

void GraphicsRobItem::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    /* Устанавливаем позицию графического элемента
     * в графической сцене, транслировав координаты
     * курсора внутри графического элемента
     * в координатную систему графической сцены
     * */
    setPos(mapToScene(event->pos()));
    QGraphicsItem::mouseMoveEvent(event);
}

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

void GraphicsRobItem::setRotationAngle(int angle)
{
    setRotation(90 - angle);
    setTheta(angle);
}

void GraphicsRobItem::contextMenuEvent(QGraphicsSceneContextMenuEvent *event)
{
    QMenu menu;
    menu.addAction("Редактор свойств элемента");
    menu.addAction("Удалить элемент");
    QAction *a = menu.exec(event->screenPos());
    if (a->text() == "Редактор свойств элемента")
    {
        ItemInputInfo info;
        info.setWindowTitle("Редактирование свойств элемента");
        info.setAngle(theta);
        info.setX(this->pos().x());
        info.setY(this->pos().y());

        switch (info.exec())
        {
        case QDialog::Accepted:
        {
            setPos(info.getX(), info.getY());
            setRotationAngle(info.getAngle());
            setTheta(info.getAngle());
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
    else if (a->text() == "Удалить элемент")
    {
        for (QGraphicsItem *item: scene()->selectedItems())
        {
            if(item!=nullptr){
                scene()->removeItem(item);
                delete item;
            }
        }
    }
}