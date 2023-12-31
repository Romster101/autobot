#ifndef EXTENDEDSCENE_H
#define EXTENDEDSCENE_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsItem>
#include <graphicsrobitem.h>
#include <QKeyEvent>

class ExtendedScene: public QGraphicsScene
{
    Q_OBJECT
public:
    explicit ExtendedScene(QObject *parent = nullptr);
    void updateNumbersOfElements();

private:
    void deleteSelectedItems();
    
signals:
    void targetCoordinate(QPointF point);
    void dblClicked(QPointF point);

protected:
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event);
    void keyPressEvent(QKeyEvent* keyEvent);
};

#endif // EXTENDEDSCENE_H
