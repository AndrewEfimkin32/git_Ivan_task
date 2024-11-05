#include "poligon.h"
#include "point.h"
#include "figure.h"
#include "figureutils.h"
#include <iostream>


Poligon::Poligon(){}

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
    return abs(sqrt(resultPolPerimeter*(resultPolPerimeter - FigureUtils::lineLength(m_p1, m_p2))*(resultPolPerimeter - FigureUtils::lineLength(m_p2, m_p3))*
            (resultPolPerimeter - FigureUtils::lineLength(m_p3, m_p4))*(resultPolPerimeter - FigureUtils::lineLength(m_p4, m_p1))));

}

void Poligon::fillPoints(){
    m_p1 = fillPoint(0);
    m_p2 = fillPoint(1);
    m_p3 = fillPoint(2);
    m_p4 = fillPoint(3);
}

bool Poligon::checkForm()
{
    bool resForPoligon;
    if (FigureUtils::lineLength(m_p1, m_p2) + FigureUtils::lineLength(m_p2, m_p3) + FigureUtils::lineLength(m_p3, m_p4) >
        FigureUtils::lineLength(m_p4, m_p1))
    {
        resForPoligon = true;
    } else {
        resForPoligon = false;
    }
    return resForPoligon;
}

std::string Poligon::myType()
{
    return figType;
}

