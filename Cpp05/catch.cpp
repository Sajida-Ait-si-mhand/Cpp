#include <iostream>
#include <cstring>

const char *ft_fun()
{
	return ("helllo");
}
int main()
{
	try {
		if (strcmp(ft_fun(), "helljlo"))
			throw "GOOD";
	}
	catch (char *errorCode) {
		std::cout << "Error occurred: " << ft_fun();
	}
}