#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), conf("../Ghostbuster/config.txt")
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    conf.loadConfig();
    ui->label_grid_val->setText(conf.getDimString());
    ui->label_ghost_val->setText(conf.getGhostCount());
}

void MainWindow::setScene(QGraphicsScene &scene)
{
    ui->graphicsView->setRenderHints(QPainter::Antialiasing);
    ui->graphicsView->setScene(&scene);
}

int MainWindow::getDimension()
{
    return conf.getDimension();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonCatch_clicked()
{

}

void MainWindow::on_buttonTimeInc_clicked()
{

}
