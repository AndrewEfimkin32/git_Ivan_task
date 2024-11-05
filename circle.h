#ifndef CIRCLE_H
#define CIRCLE_H
#include "figure.h"


class Circle : public Figure
{
public:
    Circle();
    Circle(Point p1, Point p2);
    int resultPerimeter() override;
    int resultSquare() override;
    void fillPoints() override;
    bool checkForm() override;
    std::string myType() override;
private:
    std::string figType = "Circle";
    Point m_p1, m_p2;
};

#endif // CIRCLE_H
