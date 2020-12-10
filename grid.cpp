#include "grid.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsLineItem>
#include <vector>
#include "square.h"
#include "cell.h"

Grid::Grid(QGraphicsScene &scene, int size)
    : size(size), nPieces((size - 2)*2), scene(scene)
{
    int outerSize = size + 2;

    squares = new Square ** [outerSize];

    for (int r = 0; r < size; r++)
    {
        squares[r] = new Square * [size];

        for (int c = 0; c < size; c++)
        {
            squares[r][c] = new Square(r, c);
            scene.addItem(squares[r][c]);
        }
    }
}


Grid::~Grid()
{
    for (int r = 0; r < size; r++)
    {
        squares[r] = new Square * [size];

        for (int c = 0; c < size; c++)
        {
            delete [] squares[r][c];
        }
        delete [] squares[r];
    }
    delete [] squares;
}
