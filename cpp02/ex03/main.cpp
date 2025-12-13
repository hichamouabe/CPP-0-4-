#include <iostream>
#include "Point.hpp"

int main(void) {
    Point a(0, 0);
    Point b(10, 0);
    Point c(0, 10);
    
    Point inside(2, 2);
    Point outside(20, 20);
    Point edge(5, 0);
    Point vertex(0, 0);

    if (bsp(a, b, c, inside))
        std::cout << "Point(2, 2) is inside" << std::endl;
    else
        std::cout << "Point(2, 2) is NOT inside" << std::endl;

    if (bsp(a, b, c, outside))
        std::cout << "Point(20, 20) is inside" << std::endl;
    else
        std::cout << "Point(20, 20) is NOT inside" << std::endl;

    if (bsp(a, b, c, edge))
        std::cout << "Point(5, 0) is inside" << std::endl;
    else
        std::cout << "Point(5, 0) is NOT inside" << std::endl;

    if (bsp(a, b, c, vertex))
        std::cout << "Point(0, 0) is inside" << std::endl;
    else
        std::cout << "Point(0, 0) is NOT inside" << std::endl;

    return 0;
}
