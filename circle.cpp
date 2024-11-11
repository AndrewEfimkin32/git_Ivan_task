#include "circle.h"
#include "figureutils.h"
#include <math.h>

Circle::Circle(){}

Circle::Circle(Point p1, Point p2){
    m_p1 = p1;
    m_p2 = p2;
}

int Circle::resultPerimeter()
{
    return 2 * 3.14 * FigureUtils::lineLength(m_p1, m_p2);
}

int Circle::resultSquare()
{
    return 3.14 * pow(FigureUtils::lineLength(m_p1, m_p2),2);
}

void Circle::fillPoints()
{
    m_p1 = FigureUtils::fillPoint(0);
    m_p2 = FigureUtils::fillPoint(1);
}

bool Circle::checkForm()
{
    return FigureUtils::lineLength(m_p1, m_p2) > 0;
}

std::string Circle::myType()
{
    return figType;
}


