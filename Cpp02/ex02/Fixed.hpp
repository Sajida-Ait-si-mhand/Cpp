#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	private:

		int FixedPoint;
		static const int bits = 8;

	public:
	// • The 6 comparison operators: >, <, >=, <=, == and !=.
		bool operator>(Fixed const &other) const;
		bool operator<(Fixed const &other) const;
		bool operator>=(Fixed const &other) const;
		bool operator<=(Fixed const &other) const;
		bool operator==(Fixed const &other) const;
		bool operator!=(Fixed const &other) const;
	// • The 4 arithmetic operators: +, -, *, and /.
		Fixed operator-(Fixed const &other) const;
		Fixed operator+(Fixed const &other) const;
		Fixed operator*(Fixed const &other) const;
		Fixed operator/(Fixed const &other) const;
	// Incrementaion
		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);
	// Int w lmin
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static Fixed const &min(Fixed const &a, Fixed const &b);
		static Fixed const &max(Fixed const &a, Fixed const &b);

		Fixed(); 
		Fixed(int const x); 
		Fixed(const float x); 
		Fixed(const Fixed &other);
    	Fixed& operator=(const Fixed& other);   
		~Fixed(); 
		void setRawBits( int const raw );
		int getRawBits( void ) const;
		float toFloat(void) const;
		int   toInt(void)   const;

};

std::ostream& operator<<(std::ostream &os, Fixed const &f);
//rd