#include <iostream>


int main (int ac, char *av[])
{
	if (ac > 1)
	{
		int i = 1;
		while (av[i])
		{
			int j = 0;
			while (av[i][j])
			{
				if (av[i][j] >= 'a' && av[i][j] <= 'z') {
					std::cout << (char)(std::toupper(av[i][j]));
				}
				
				else
					std::cout << av[i][j];
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	else 
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	return 1;
}
