#ifndef JSONMODULE_H
#define JSONMODULE_H

#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>
#include <QFileDialog>
#include <QStandardPaths>
#include <QMessageBox>
#include "extendedscene.h"
#include "graphicsrobitem.h"
#include <QGraphicsItem>

class JSONmodule
{
public:
    JSONmodule(){};
    ~JSONmodule(){};

    QString getSavePath() const {return path;}
    void setSavePath(const QString &_path) {path = _path;};

    // метод для получения объекта json 
    QJsonObject getJsonObj(ExtendedScene* scene);
    // метод сохранения объекта
    void saveToJsonObj(QJsonObject obj);
        // метод для выгрузки 
    QJsonObject readFromJsonObj(QString path);
        // метод загрузки объекта в программу
    void loadJsonObjectIntoProgramm(QJsonObject obj,ExtendedScene* scene);

private:
    QString path; // путь сохранения 
};


#endif // JSONMODULE_H