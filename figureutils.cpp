#include "figureutils.h"
#include "figure.h"
#include <math.h>
#include <iostream>


int FigureUtils::lineLength(const Point &p1, const Point &p2)
{
    return sqrt(pow(p2.getX() - p1.getX(), 2) + pow(p2.getY() - p1.getY(), 2));
}

Point FigureUtils::fillPoint(int index){
    int x,y;
    std::cout<< "Enter X " << index << std::endl;
    std::cin >> x;
    std::cout<< "Enter Y " << index << std::endl;
    std::cin >> y;
    return Point(x, y);
}
