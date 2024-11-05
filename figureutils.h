#ifndef FIGUREUTILS_H
#define FIGUREUTILS_H
#include "point.h"
#include <cmath>
#include "figure.h"


class FigureUtils
{
public:
    static int lineLength(const Point &p1, const Point &p2){
        return sqrt(pow(p2.GetX() - p1.GetX(), 2) + pow(p2.GetY() - p1.GetY(), 2));
    }

};

#endif // FIGUREUTILS_H
