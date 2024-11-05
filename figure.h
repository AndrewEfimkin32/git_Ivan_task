#ifndef FIGURE_H
#define FIGURE_H
#include "point.h"
#include <iostream>
#include <string>
#include <vector>
#include <math.h>


class Figure
{
public:
    virtual bool checkForm(){return 0;}
    virtual int resultPerimeter(){return 0;}
    virtual int resultSquare(){return 0;}
    virtual void fillPoints(){}
    virtual std::string myType() = 0;
    Point fillPoint(int index){
        int x,y;
        std::cout<< "Enter X" << index << std::endl;
        std::cin >> x;
        std::cout<< "Enter Y" << index << std::endl;
        std::cin >> y;
        return Point(x, y);
    }
};

#endif // FIGURE_H
