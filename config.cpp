#include "config.h"
#include <QTextStream>
#include <QDebug>

Config::Config(QString fname) : configFile(fname), dim(0), numGhost(0)
{
    if (!configFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << configFile.errorString();
    }
}

void Config::loadConfig()
{
    QTextStream in(&configFile);
    in >> dim;
    in >> numGhost;
}

int Config::getDimension()
{
    return dim;
}

QString Config::getDimString()
{
    QString dimStr = QString::number(dim) + "x" + QString::number(dim);
    return dimStr;
}

QString Config::getGhostCount()
{
    return QString::number(numGhost);
}

Config::~Config()
{
    configFile.close();
}
