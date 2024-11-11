#include "poligon.h"
#include "figureutils.h"
#include "point.h"
#include <math.h>

Poligon::Poligon()
{

}

Poligon::Poligon(Point p1, Point p2, Point p3, Point p4){
    m_p1 = p1;
    m_p2 = p2;
    m_p3 = p3;
    m_p4 = p4;
}

int Poligon::resultPerimeter(){
    int dlina1 = FigureUtils::lineLength(m_p1, m_p2);
    int dlina2 = FigureUtils::lineLength(m_p2, m_p3);
    int dlina3 = FigureUtils::lineLength(m_p3, m_p4);
    int dlina4 = FigureUtils::lineLength(m_p4, m_p1);
    return dlina1 + dlina2 + dlina3 + dlina4;
}

int Poligon::resultSquare()
{
    int resultPolPerimeter = 0.5 * resultPerimeter();
    // очень длинные строки
    return abs(sqrt(resultPolPerimeter*(resultPolPerimeter - FigureUtils::lineLength(m_p1, m_p2))*
           (resultPolPerimeter - FigureUtils::lineLength(m_p2, m_p3))*
           (resultPolPerimeter - FigureUtils::lineLength(m_p3, m_p4))*
           (resultPolPerimeter - FigureUtils::lineLength(m_p4, m_p1))));

}

void Poligon::fillPoints(){
    m_p1 = FigureUtils::fillPoint(0);
    m_p2 = FigureUtils::fillPoint(1);
    m_p3 = FigureUtils::fillPoint(2);
    m_p4 = FigureUtils::fillPoint(3);
}

bool Poligon::checkForm()
{
    return FigureUtils::lineLength(m_p1, m_p2) +
           FigureUtils::lineLength(m_p2, m_p3) +
           FigureUtils::lineLength(m_p3, m_p4) >
           FigureUtils::lineLength(m_p4, m_p1);
}

std::string Poligon::myType()
{
    return figType;
}

