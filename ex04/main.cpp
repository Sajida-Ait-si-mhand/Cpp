#include <iostream>
#include <fstream>
#include <string.h>

int main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cerr << "BAD ARGS !" << std::endl;
		return 0;
	}
	std::string filename(av[1]);
	std::string s1(av[2]);
	std::string s2(av[3]);

    std::ifstream file(filename.c_str());  //  for C++98
	if (!file.is_open())
	{
		std::cerr << "BAD OPEN !" << std::endl;
		return 1;
	}
	std::ofstream copied((filename + ".replace").c_str());
	if (!copied.is_open())	
	{
		std::cerr << " BAD FILE 2 !" << std::endl;
		return 1 ; 
	}
	std::string line;
	size_t pos = 0;
	while (std::getline(file, line))
	{
		while ((pos = line.find(s1, pos) )!= std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length(); // 1111
		}
		// std::cout << line << std::endl;
		copied <<  line  << std::endl;
	}

	file.close();
	copied.close ();
	return 0;
}