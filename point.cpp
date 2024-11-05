#include "point.h"


Point::Point(): m_x(0), m_y(0){}

Point::Point(int x, int y){m_x = x, m_y = y;}

void Point::SetX(int x){ m_x = x;}

void Point::SetY(int y){ m_y = y;}

int Point::GetX() const {return m_x;}

int Point::GetY()const {return m_y;}
