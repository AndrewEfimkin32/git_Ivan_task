#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "poligon.h"

class Rectangles : public Poligon
{
public:
    Rectangles(): Poligon(){}
    Rectangles(Point p1, Point p2, Point p3, Point p4) : Poligon (p1, p2, p3, p4){}
    bool checkForm() override;
private:
    std::string figType = "Rectangle";
    Point m_p1, m_p2, m_p3, m_p4;
};
#endif // RECTANGLE_H
