#include <iostream>
#include <cstring>

// const char *ft_fun()
// {
// 	return ("helllo");
// }
// int main()
// {
// 	try {
// 		if (strcmp(ft_fun(), "helllo") == 0 )
// 			throw ft_fun();
// 	}
// 	catch (const char *errorCode) {
// 		std::cout << "Error occurred: " << ft_fun();
// 	}
// }

int ft_fun()
{
	return (223);
}
int main()
{
	int c = ft_fun();
	try {
		if (23 == c)
			throw ft_fun();
	}
	catch (int errorCode) {
		std::cout << "Error occurred: " << ft_fun();
	}
}