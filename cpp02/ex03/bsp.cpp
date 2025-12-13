#include "Point.hpp"

static Fixed abs_fixed(Fixed x) {
    if (x < 0)
        return x * -1;
    return x;
}

static Fixed calculateArea(Point const a, Point const b, Point const c) {
    Fixed area = (a.getX() * (b.getY() - c.getY()) +
                  b.getX() * (c.getY() - a.getY()) +
                  c.getX() * (a.getY() - b.getY())) / 2;
    return abs_fixed(area);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed abcArea = calculateArea(a, b, c);
    Fixed pabArea = calculateArea(point, a, b);
    Fixed pbcArea = calculateArea(point, b, c);
    Fixed pcaArea = calculateArea(point, c, a);

    if (pabArea == 0 || pbcArea == 0 || pcaArea == 0)
        return false;

    return (pabArea + pbcArea + pcaArea) == abcArea;
}
