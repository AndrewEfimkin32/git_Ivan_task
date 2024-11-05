#include "figure.h"
#include "point.h"


Point fillPoint(int index){
    int x,y;
    std::cout<< "Enter X" << index << std::endl;
    std::cin >> x;
    std::cout<< "Enter Y" << index << std::endl;
    std::cin >> y;
    return Point(x, y);
}

