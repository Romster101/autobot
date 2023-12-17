#include "graphicsrobitem.h"

GraphicsRobItem::GraphicsRobItem(int x, int y, int theta)
{
    QPixmap pix1(":/img/strelka.png");
    pix1.setDevicePixelRatio(1);
    setPixmap(pix1);
    setPos(x, y);
    setOffset(-pix1.width() / 2, -pix1.height() / 2);
    setRotationAngle(theta);
    setFlags(QGraphicsItem::ItemIsSelectable|ItemIsFocusable);
};

void GraphicsRobItem::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    /* Устанавливаем позицию графического элемента
     * в графической сцене, транслировав координаты
     * курсора внутри графического элемента
     * в координатную систему графической сцены
     * */
    setPos(mapToScene(event->pos()));
    x = mapToScene(event->pos()).x();
    y = mapToScene(event->pos()).y();
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