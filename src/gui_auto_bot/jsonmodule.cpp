#include "jsonmodule.h"

void JSONmodule::saveToJsonObj(QJsonObject obj) // сохранение объекта
{
    QFile saveFile(path);
    if (saveFile.open(QIODevice::WriteOnly)) // на чтение
    {
        QJsonDocument saveDoc(obj);
        saveFile.write(saveDoc.toJson());
        saveFile.close();
    } else {
        //QMessageBox::warning(this->parent(),"Ошибка сохранения","Файл не сохранен");
    }
}

QJsonObject JSONmodule::readFromJsonObj(QString path)
{
    QJsonObject jsonObj;
    if (QFile::exists(path) /*loadFile.exists()*/)
    {
        QFile loadFile(path);
        if (loadFile.open(QIODevice::ReadOnly))
        {
            QByteArray loadData = loadFile.readAll();
            loadFile.close();
            QJsonDocument loadDoc(QJsonDocument::fromJson(loadData));
            jsonObj = loadDoc.object();
        }
        else
        {
           //QMessageBox.warning(None,QString("Ошибка загрузки"),QString("Файл не может быть открыт"));
        }
    }
    else
    {
        //QMessageBox.warning(None,QString("Ошибка загрузки"),QString("Файл не найден"));
    }
    return jsonObj;
}

QJsonObject JSONmodule::getJsonObj(ExtendedScene *scene)
{
    auto itemsList = scene->getRobItemsVector();
    QJsonArray arr;
    for(QGraphicsItem* item:itemsList){
        QJsonObject obj;
        obj.insert("x",item->pos().x());
        obj.insert("y",item->pos().y());
        obj.insert("angle",item->data(RotationField).toInt());
        obj.insert("cargo_out",item->data(CargoOutField).toBool());
        obj.insert("num",item->data(NumberField).toInt());
        arr.append(obj);
    }
    QJsonObject object;
    object.insert("pointsArray",arr);
    return object;
}

void JSONmodule::loadJsonObjectIntoProgramm(QJsonObject obj, ExtendedScene *scene)
{
    QJsonArray arr = obj.value("pointsArray").toArray();
    for(QJsonValue const &obj:arr){
        auto obj1 = obj.toObject();
        auto x = obj1.value("x").toInt();
        auto y = obj1.value("y").toInt();
        auto theta = obj1.value("angle").toInt();
        auto cargo_out = obj1.value("cargo_out").toBool();
        auto num = obj1.value("num").toInt();
        GraphicsRobItem* item = new GraphicsRobItem(x,-y,theta,cargo_out);
        item->setElementNumber(num);
        scene->addRobItem(item);
    }
}
