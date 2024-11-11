#ifndef SQUARE_H
#define SQUARE_H
#include "rectangle.h"

class Square : public Rectangles
{
public:
    Square(): Rectangles(){}
    Square(Point p1, Point p2, Point p3, Point p4) : Rectangles (p1, p2, p3, p4){}
    bool checkForm() override;
private:
    std::string figType = "Square";
    Point m_p1, m_p2, m_p3, m_p4;
};


#endif // SQUARE_H
