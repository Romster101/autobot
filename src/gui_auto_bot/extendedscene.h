#ifndef EXTENDEDSCENE_H
#define EXTENDEDSCENE_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsItem>

class ExtendedScene: public QGraphicsScene
{
    Q_OBJECT
public:
    explicit ExtendedScene(QObject *parent = nullptr);

signals:
    void targetCoordinate(QPointF point);
    void dblClicked(QPointF point);

protected:
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event);
};

#endif // EXTENDEDSCENE_H
