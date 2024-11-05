#include "rectangle.h"
#include "poligon.h"
#include "figureutils.h"

Rectangles::Rectangles(){}

Rectangles::Rectangles(Point p1, Point p2, Point p3, Point p4){
    m_p1 = p1;
    m_p2 = p2;
    m_p3 = p3;
    m_p4 = p4;
}

bool Rectangles::checkForm()
{
    bool resultDiag;
    if (FigureUtils::lineLength(m_p1, m_p3) == FigureUtils::lineLength(m_p2, m_p4))
    {
        resultDiag = true;
    } else {
        resultDiag = false;
    }
    return resultDiag;

}

int Rectangles::resultPerimeter(){
    int dlina1 = FigureUtils::lineLength(m_p1, m_p2);
    int dlina2 = FigureUtils::lineLength(m_p2, m_p3);
    int dlina3 = FigureUtils::lineLength(m_p3, m_p4);
    int dlina4 = FigureUtils::lineLength(m_p4, m_p1);
    return dlina1 + dlina2 + dlina3 + dlina4;
}

int Rectangles::resultSquare()
{
    return FigureUtils::lineLength(m_p1, m_p2) * FigureUtils::lineLength(m_p2, m_p3);
}

void Rectangles::fillPoints(){
    m_p1 = fillPoint(0);
    m_p2 = fillPoint(1);
    m_p3 = fillPoint(2);
    m_p4 = fillPoint(3);
}

std::string Rectangles::myType()
{
    return figType;
}
