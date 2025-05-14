#include "Fixed.hpp"

Fixed::Fixed()
{ 
	this->FixedPoint = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
void Fixed::setRawBits( int const raw )
{
	this->FixedPoint = raw;
}

int Fixed::getRawBits() const
{
	return (this->FixedPoint);
}

Fixed::Fixed(const Fixed &other)
{
	this->FixedPoint = other.FixedPoint;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	this->FixedPoint = other.FixedPoint;
	return *this;
}