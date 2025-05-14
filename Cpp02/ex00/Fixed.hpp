#pragma once

#include <iostream>

class Fixed
{
	private:
		int FixedPoint;
		static const int bits = 8;
	public:
		Fixed(); 
		Fixed(const Fixed &other);
    	Fixed& operator=(const Fixed& other);   
		~Fixed(); 
		void setRawBits( int const raw );
		int getRawBits( void ) const;
};
