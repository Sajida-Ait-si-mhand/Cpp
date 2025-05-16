#include "Fixed.hpp"

Fixed::Fixed()
{ 
	// std::cout << "Default constructor called" << std::endl;
	this->FixedPoint = 0;
}

Fixed::Fixed(int const x)
{ 
	this->FixedPoint= x * 256;
	// std::cout << "Int constructor called\n" << std::endl;
}

Fixed::Fixed(float const x)
{ 
	this->FixedPoint = roundf(x * 256.0f);//cast
	// std::cout << "Floting" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	// std::cout << "Copy constructor called" << std::endl;
	this->FixedPoint = other.FixedPoint;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	// std::cout << "Copy assignment operator called " << std::endl;
	this->FixedPoint = other.FixedPoint;
	return *this;
}

void Fixed::setRawBits( int const raw )
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->FixedPoint = raw;
}

int Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->FixedPoint);
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
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
// Implementation de operateur comparaison:

bool Fixed::operator<(Fixed const &other) const
{
	return (this->FixedPoint < other.FixedPoint);
}

bool Fixed::operator>(Fixed const &other) const
{
	return (this->FixedPoint > other.FixedPoint);
}

bool Fixed::operator<=(Fixed const &other) const
{
	return (this->FixedPoint <= other.FixedPoint);
}

bool Fixed::operator>=(Fixed const &other) const
{
	return (this->FixedPoint >= other.FixedPoint);
}

bool Fixed::operator==(Fixed const &other) const
{
	return (this->FixedPoint == other.FixedPoint);
}

bool Fixed::operator!=(Fixed const &other) const
{
	return (this->FixedPoint != other.FixedPoint);
}

//  The 4 arithmetic operators: +, -, *, and /
Fixed Fixed::operator+(Fixed const &other) const
{
	Fixed result;
	long long  sum = (long long)this->getRawBits() + other.getRawBits();
	result.setRawBits(sum);
	return (result);
}

Fixed Fixed::operator-(Fixed const &other) const
{
	Fixed result;
	long long dim = (long long)this->getRawBits() - other.getRawBits();
	result.setRawBits(dim);
	return (result);
}

Fixed Fixed::operator*(Fixed const &other) const {
    Fixed result;
    long long prod = (long long)this->getRawBits() * other.getRawBits();
    result.setRawBits(prod / 256);
    return result;
}

Fixed Fixed::operator/(Fixed const &other) const {
    Fixed result;
    long long dividend = ((long long)this->getRawBits() * 256);
    result.setRawBits((int)(dividend / other.getRawBits()));
    return result;
}
// Incrementaion 

Fixed &Fixed::operator++() {
	this->FixedPoint += 1;
	return (*this);
}

Fixed Fixed::operator++(int) //a++
{
	Fixed copy(*this);
	this->FixedPoint += 1;
	return (copy);
}

Fixed &Fixed::operator--()
{
	this->FixedPoint -= 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed copy(*this);
	this->FixedPoint -=1;
	return (copy);
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    if (a.getRawBits() <= b.getRawBits())
        return a;
    else
        return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    if (a.getRawBits() <= b.getRawBits())
        return a;
    else
        return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    if (a.getRawBits() >= b.getRawBits())
        return a;
    else
        return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    if (a.getRawBits() >= b.getRawBits())
        return a;
    else
        return b;
}
