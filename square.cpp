#include "square.h"
#include <QGraphicsSceneMouseEvent>
#include <QFont>
#include <QPen>

Square::Square(int row, int col)
   : QGraphicsRectItem((row+1)*DL, (col+1)*DL, DL-2, DL-2), value(this)
   , highlighted(false)
{
   setFlags(ItemIsSelectable);
   if ((row+col) % 2)
   {
       brush = new QBrush(DARKFILL);
   }
   else
   {
       brush = new QBrush(LIGHTFILL);
   }
   value.setText("0.0");
   QFont font = value.font();
   font.setPointSizeF(12);
   value.setFont(font);
   value.setBrush(QBrush(WHITE));
   value.setPos((row+1) * DL + DL/2 - value.boundingRect().width()/2,
                (col+1) * DL + DL/2 - value.boundingRect().height()/2);
   this->setBrush(*brush);
}

void Square::onSelected()
{
    QPen pen = this->pen();
    pen.setColor(SELECTION);
    pen.setWidthF(4.0);
    this->setPen(pen);
    highlighted = true;
}

void Square::highlight()
{
    this->setBrush(QBrush(GREEN));
}

void Square::clearHighlight()
{
    if (highlighted)
    {
        QPen pen = this->pen();
        pen.setColor(BLACK);
        pen.setWidthF(1.0);
        this->setPen(pen);
        highlighted = false;
    }
    this->setBrush(*brush);
}

void Square::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
   if (event->button() == Qt::LeftButton)
   {
       if (!highlighted) highlight();
       else clearHighlight();
//        qDebug() << event->pos().x() << ", " << event->pos().y() << "\n";
//       controller->processClickEvent(event->pos().x(), event->pos().y());
   }
   else QGraphicsRectItem::mouseReleaseEvent(event);
}
