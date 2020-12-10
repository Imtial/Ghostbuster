#ifndef GRID_H
#define GRID_H


#include "constants.h"

typedef std::vector<float> VF;
typedef std::vector<std::vector<float>> VVF;

class QGraphicsScene;
class Square;

class Grid
{
    int size;
    int nPieces;
    QGraphicsScene &scene;
    Square *** squares;
public:
    Grid(QGraphicsScene &scene, int size);
    ~Grid();
};

#endif // GRID_H
