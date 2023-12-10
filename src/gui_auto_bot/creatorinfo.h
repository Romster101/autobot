#ifndef CREATORINFO_H
#define CREATORINFO_H


#include "graphicsrobitem.h"
#include <memory>
#include <QVector>

class CreatorInfo
{
public:
    CreatorInfo(){};
    ~CreatorInfo(){};

private:
    QVector<GraphicsRobItem*> vecOfItems;

};
#endif