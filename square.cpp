#include "square.h"
#include "figureutils.h"
#include "point.h"


Square::Square(){}

Square::Square(Point p1, Point p2, Point p3, Point p4)
{
    m_p1 = p1;
    m_p2 = p2;
    m_p3 = p3;
    m_p4 = p4;
}

int Square::resultPerimeter()
{
     int dlina1 = FigureUtils::lineLength(m_p1, m_p2);
     int dlina2 = FigureUtils::lineLength(m_p2, m_p3);
     int dlina3 = FigureUtils::lineLength(m_p3, m_p4);
     int dlina4 = FigureUtils::lineLength(m_p4, m_p1);
     return dlina1 + dlina2 + dlina3 + dlina4;
}

int Square::resultSquare()
{
    return pow(FigureUtils::lineLength(m_p1, m_p2), 2);
}

bool Square::checkForm()
{
    bool resForSquare;
    if (FigureUtils::lineLength(m_p1, m_p2) == FigureUtils::lineLength(m_p2, m_p3) || FigureUtils::lineLength(m_p2, m_p3)
            == FigureUtils::lineLength(m_p3, m_p4) || FigureUtils::lineLength(m_p3, m_p4) == FigureUtils::lineLength(m_p4, m_p1))
    {
        resForSquare = true;
    } else {
        resForSquare = false;
    }
    return resForSquare;
}

void Square::fillPoints(){
    m_p1 = fillPoint(0);
    m_p2 = fillPoint(1);
    m_p3 = fillPoint(2);
    m_p4 = fillPoint(3);
}

std::string Square::myType()
{
    return figType;
}

