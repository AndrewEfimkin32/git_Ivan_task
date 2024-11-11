#ifndef POINT_H
#define POINT_H

class Point
{
public:
    Point();
    Point(int x, int y);
    void setX(int x); // вообще названия функций с "верблюжем" регистре.
    void setY(int y); // типа такого: setX, setY, getX, getY.
    int getX() const;
    int getY() const;

private:
    int m_x, m_y;
};

#endif // POINT_H
