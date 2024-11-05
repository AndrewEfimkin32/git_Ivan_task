#include "figureutils.h"
#include "point.h"
#include <math.h>
#include "figure.h"

static int lineLength(const Point &p1, const Point &p2){
    return sqrt(pow(p2.GetX() - p1.GetX(), 2) + pow(p2.GetY() - p1.GetY(), 2));
}


