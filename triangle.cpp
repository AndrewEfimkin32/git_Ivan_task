#include "triangle.h"
#include "figureutils.h"


Triangle::Triangle()
{

}

Triangle::Triangle(Point p1, Point p2, Point p3)
{
    m_p1 = p1;
    m_p2 = p2;
    m_p3 = p3;
}

int Triangle::resultPerimeter()
{
    int dlina1 = FigureUtils::lineLength(m_p1, m_p2);
    int dlina2 = FigureUtils::lineLength(m_p2, m_p3);
    int dlina3 = FigureUtils::lineLength(m_p3, m_p1);
    return dlina1 + dlina2 + dlina3;
}

int Triangle::resultSquare()
{
    int resultPolPerimeter = 0.5 * resultPerimeter();
    return abs(sqrt(resultPolPerimeter*(resultPolPerimeter - FigureUtils::lineLength(m_p1, m_p2))*(resultPolPerimeter - FigureUtils::lineLength(m_p2, m_p3))*
                (resultPolPerimeter - FigureUtils::lineLength(m_p3, m_p1))));
}

void Triangle::fillPoints()
{
    m_p1 = fillPoint(0);
    m_p2 = fillPoint(1);
    m_p3 = fillPoint(2);
}

bool Triangle::checkForm()
{
    bool resForTriangle;
    if (FigureUtils::lineLength(m_p1, m_p2) + FigureUtils::lineLength(m_p2, m_p3) > FigureUtils::lineLength(m_p3, m_p1) &&
        FigureUtils::lineLength(m_p2, m_p3) + FigureUtils::lineLength(m_p3, m_p1) > FigureUtils::lineLength(m_p1, m_p2) &&
        FigureUtils::lineLength(m_p1, m_p2) + FigureUtils::lineLength(m_p3, m_p1) > FigureUtils::lineLength(m_p2, m_p3))
    {
        resForTriangle = true;
    } else {
        resForTriangle = false;
    }
    return resForTriangle;
}

std::string Triangle::myType()
{
    return figType;
}


