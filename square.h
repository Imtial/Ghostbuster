#ifndef SQUARE_H
#define SQUARE_H

#include "constants.h"
#include <QBrush>
#include <QGraphicsRectItem>
#include <QGraphicsSimpleTextItem>

class Controller;
class QGraphicsSceneMouseEvent;

class Square : public QGraphicsRectItem
{
private:
    QBrush * brush;
    Controller * controller;
    QGraphicsSimpleTextItem value;
    bool highlighted;
protected:
    void mouseReleaseEvent(QGraphicsSceneMouseEvent * event) override;
public:
    Square(int row, int col);
    void setProbability(float prob);
    void onSelected();
    void highlight();
    void clearHighlight();
};

#endif // SQUARE_H
