#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor operator called" << std::endl;
	
	this->_fixedPointValue = other.getRawBits();
}
Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &other)
	{
		this->_fixedPointValue = other.getRawBits();
	}
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointValue;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}
