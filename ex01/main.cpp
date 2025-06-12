#include "Phonebook.hpp"

int main()
{
	PhoneBook phoneBook;
	
	std::string command;
	std::cout << " \033[36m ===>Enter your command [ADD, SEARCH, EXIT]: <===\033[0m " << std::endl;
	while (true)
	{
		std::cout << "\033[36m@>\033[0m";
		std::getline(std::cin, command);
		if (std::cin.eof())
			break;
		if (command == "ADD")
			phoneBook.add();
		else if (command == "SEARCH")
			phoneBook.search();
		else if (command == "EXIT")
			break;
		else
			std::cout << "Enter your command [ADD, SEARCH, EXIT]:" << std::endl;
	}
	return 0;
}
