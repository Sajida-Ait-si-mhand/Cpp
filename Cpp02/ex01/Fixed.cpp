#include "Fixed.hpp"

Fixed::Fixed()
{ 
	std::cout << "Default constructor called" << std::endl;
	this->FixedPoint = 0;
}

Fixed::Fixed(int const x)
{ 
	this->FixedPoint= x * 256;
	std::cout << "Int constructor called\n" << std::endl;
}

Fixed::Fixed(float const x)
{ 
	this->FixedPoint = static_cast<int>(roundf(x * 256.0f));
	std::cout << "Floting" << std::endl;
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

float Fixed::toFloat(void) const
{
	return this->FixedPoint / 256.0f;
}
int   Fixed::toInt(void)   const
{
	return this->FixedPoint / 256;  

}

std::ostream& operator<<(std::ostream &os, Fixed const &f) {
    return os << f.toFloat();
}
