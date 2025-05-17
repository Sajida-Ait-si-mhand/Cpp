#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	private:

		int FixedPoint;
		static const int bits = 8;

	public:

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
