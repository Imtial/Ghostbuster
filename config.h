#ifndef FILEIO_H
#define FILEIO_H

#include <QFile>
#include <QString>

class Config
{
private:
    QFile configFile;
    int dim;
    int numGhost;
public:
    Config(QString fname);
    void loadConfig();
    int getDimension();
    QString getDimString();
    QString getGhostCount();
    ~Config();
};

#endif // FILEIO_H
