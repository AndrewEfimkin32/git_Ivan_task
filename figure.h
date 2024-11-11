#ifndef FIGURE_H
#define FIGURE_H
#include "point.h"
#include <string>

class Figure
{
public:
    virtual bool checkForm() = 0; //< = 0.
    virtual int resultPerimeter() = 0; //< = 0.
    virtual int resultSquare() = 0;//< = 0.
    virtual void fillPoints() = 0; //< = 0.
    virtual std::string myType() = 0;
};

#endif // FIGURE_H
