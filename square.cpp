#include "square.h"
#include "figureutils.h"
#include "point.h"

bool Square::checkForm()
{
    return FigureUtils::lineLength(m_p1, m_p2) == FigureUtils::lineLength(m_p2, m_p3) || FigureUtils::lineLength(m_p2, m_p3)
            == FigureUtils::lineLength(m_p3, m_p4) || FigureUtils::lineLength(m_p3, m_p4) == FigureUtils::lineLength(m_p4, m_p1);
}


