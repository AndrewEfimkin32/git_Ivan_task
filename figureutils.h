#ifndef FIGUREUTILS_H
#define FIGUREUTILS_H
#include "point.h"


class FigureUtils
{
public:
    static int lineLength(const Point &p1, const Point &p2);

    static Point fillPoint(int index);

};

#endif // FIGUREUTILS_H
