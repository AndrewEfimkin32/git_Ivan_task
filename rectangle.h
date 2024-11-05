#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "rectangle.h"
#include "poligon.h"


class Rectangles : public Poligon
{
public:
    Rectangles();
    Rectangles(Point p1, Point p2, Point p3, Point p4);
    int resultPerimeter() override;
    int resultSquare() override;
    bool checkForm() override;
    void fillPoints() override;
    std::string myType() override;
private:
    std::string figType = "Rectangle";
    Point m_p1, m_p2, m_p3, m_p4;
};
#endif // RECTANGLE_H
