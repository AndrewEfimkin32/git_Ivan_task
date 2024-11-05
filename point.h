#ifndef POINT_H
#define POINT_H

class Point
{
public:
    Point();
    Point(int x, int y);
    void SetX(int x);
    void SetY(int y);
    int GetX() const;
    int GetY() const;

private:
    int m_x, m_y;
};

#endif // POINT_H
