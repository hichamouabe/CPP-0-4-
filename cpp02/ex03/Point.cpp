#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point& other) : _x(other._x), _y(other._y) {}

Point& Point::operator=(const Point& other) {
    if (this != &other) {
        const_cast<Fixed&>(this->_x) = other.getX();
        const_cast<Fixed&>(this->_y) = other.getY();
    }
    return *this;
}

Point::~Point() {}

Fixed Point::getX() const {
    return this->_x;
}

Fixed Point::getY() const {
    return this->_y;
}
