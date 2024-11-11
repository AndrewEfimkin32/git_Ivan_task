#include "rectangle.h"
#include "figureutils.h"


bool Rectangles::checkForm()
{
    return FigureUtils::lineLength(m_p1, m_p3) == FigureUtils::lineLength(m_p2, m_p4);
}

