#include "mainwindow.h"

#include <QApplication>
#include <QGraphicsScene>
#include <QDebug>
#include "grid.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QGraphicsScene scene;
    MainWindow w;
    Grid grid(scene, w.getDimension());
    w.setScene(scene);
    w.show();
    return a.exec();
}
