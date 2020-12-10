#ifndef CELL_H
#define CELL_H
#include <cstdint>

class Cell
{
public:
    int8_t r;
    int8_t c;

    Cell();
    Cell(int8_t row, int8_t col);
    Cell operator+(int8_t n);
    Cell operator-(int8_t n);
    Cell operator*(int8_t n);
    Cell operator/(int8_t n);
    Cell operator+(const Cell& rhs);
    Cell operator-(const Cell& rhs);
    Cell operator*(const Cell& rhs);
    Cell operator/(const Cell& rhs);
    Cell& operator+=(int8_t n);
    Cell& operator-=(int8_t n);
    Cell& operator*=(int8_t n);
    Cell& operator/=(int8_t n);
    Cell& operator+=(const Cell& rhs);
    Cell& operator-=(const Cell& rhs);
    Cell& operator*=(const Cell& rhs);
    Cell& operator/=(const Cell& rhs);
    bool operator==(const Cell& rhs);
    bool operator!=(const Cell& rhs);
};

#endif // CELL_H
