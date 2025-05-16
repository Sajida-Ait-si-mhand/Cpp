#include "Fixed.hpp"

int main() {
    // Fixed a(  5 );        // 5.0
    // Fixed b(  2 );        // 2.0
    // Fixed c;              // will hold results

    // std::cout << "a = " << a << std::endl;  
    // std::cout << "b = " << b << std::endl;

    // // 1) Addition
    // c = a + b;
    // std::cout << "a + b = " << c << std::endl;
    // c = a.operator+(b);
    // std::cout << "a.operator+(b) = " << c << std::endl;

    // // 2) Subtraction
    // c = a - b;
    // std::cout << "a - b = " << c << std::endl;
    // c = a.operator-(b);
    // std::cout << "a.operator-(b) = " << c << std::endl;

    // // 3) Multiplication
    // c = a * b;
    // std::cout << "a * b = " << c << std::endl;
    // c = a.operator*(b);
    // std::cout << "a.operator*(b) = " << c << std::endl;

    // // 4) Division
    // c = a / b;
    // std::cout << "a / b = " << c << std::endl;
    // c = a.operator/(b);
    // std::cout << "a.operator/(b) = " << c << std::endl;
	// Fixed a;

	// std::cout << "Start: " << a << std::endl;

	// // Use operator++ directly (pre-increment)
	// a.operator++();  // same as ++a
	// std::cout << "After a.operator++(): " << a << std::endl;

	// // Use operator++ directly (post-increment)
	// a.operator++(0);  // same as a++
	// std::cout << "After a.operator++(0): " << a << std::endl;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl; 
    return 0;
}