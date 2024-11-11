#ifndef POLIGON_H
#define POLIGON_H
#include "figure.h"


class Poligon : public Figure
{
public:
    Poligon();
    Poligon(Point p1, Point p2, Point p3, Point p4);
    int resultPerimeter() override;
    int resultSquare() override;
    void fillPoints() override;
    bool checkForm() override;
    std::string myType() override;

private:
    std::string figType = "Poligon";
    Point m_p1, m_p2, m_p3, m_p4;
};
#endif // POLIGON_H
