#include "Fixed.hpp"

Fixed::Fixed()
{ 
	std::cout << "Default constructor called" << std::endl;
	this->FixedPoint = 0;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->FixedPoint = other.FixedPoint;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called " << std::endl;
	this->FixedPoint = other.FixedPoint;
	return *this;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->FixedPoint = raw;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->FixedPoint);
}



Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}