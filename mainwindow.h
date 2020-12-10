#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include "config.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    Config conf;
public:
    MainWindow(QWidget *parent = nullptr);
    void setScene(QGraphicsScene &scene);
    int getDimension();
    ~MainWindow();

private slots:
    void on_buttonCatch_clicked();

    void on_buttonTimeInc_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
