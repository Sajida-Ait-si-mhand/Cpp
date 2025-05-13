#pragma once

#include <iostream>

class Fixed
{
	private:
		int FixedPoint;
		static const int bits;
	public:
		Fixed(); // default
		~Fixed(); // destructor

};