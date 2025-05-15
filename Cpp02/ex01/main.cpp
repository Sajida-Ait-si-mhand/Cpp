#include "Fixed.hpp"
 

int main()
{
// 	Fixed z(5.75f);
// std::cout << z.toFloat() << "\n"  // ~5.75
//           << z.toInt()   << "\n"; // 5
// std::cout << "pi = " << Fixed(3.14f) << "\n";
// std::cout << Fixed(2.5f) << std::endl;  // prints "2.5"
Fixed a;
Fixed const b(10);
Fixed const c(42.42f);
Fixed const d(b);
a = Fixed(1234.4321f);

std::cout << "a is " << a << std::endl;
std::cout << "b is " << b << std::endl;
std::cout << "c is " << c << std::endl;
std::cout << "d is " << d << std::endl;

std::cout << "a is " << a.toInt() << " as integer\n";
std::cout << "b is " << b.toInt() << " as integer\n";
std::cout << "c is " << c.toInt() << " as integer\n";
std::cout << "d is " << d.toInt() << " as integer\n";

	return 0;
}