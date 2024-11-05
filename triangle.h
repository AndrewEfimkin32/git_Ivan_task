#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "figure.h"


class Triangle : public Figure
{
public:
    Triangle();
    Triangle(Point p1, Point p2, Point p3);
    int resultPerimeter() override;
    int resultSquare() override;
    void fillPoints() override;
    bool checkForm() override;
    std::string myType() override;
private:
    std::string figType = "Triangle";
    Point m_p1, m_p2, m_p3;
};

#endif // TRIANGLE_H
