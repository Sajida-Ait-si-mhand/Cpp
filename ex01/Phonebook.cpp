#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
	count  = 0;
}

void PhoneBook::add()
{
    int i;
    i = (count % 8);
    contacts[i].setIndex(i + 1) ;
    type_your_infos(contacts[i]);
    std::cout << "\033[32mContact added successfully.\033[0m" << std::endl;
    count++;
}

void PhoneBook::check_10(std::string value)
{
	if (value.length() > 10) 
		value = value.substr(0, 9) + '.';
	std::cout << std::setw(10) <<  value  << "|";
}

void PhoneBook::type_your_infos(Contact &contact)
{
    std::string input;

    std::cout << "Please enter the first name:" << std::endl;
    std::getline(std::cin, input);
    if (std::cin.eof())
		  exit(0);
    while (input.empty())
    {
        std::cout << "\033[0;31mError: First name cannot be empty.\033[0m" << std::endl;
        std::cout << "Please enter the first name:" << std::endl;
        std::getline(std::cin, input);
        if (std::cin.eof())
		      exit(0);
    }
    for (size_t i = 0; i < input.length(); i++)
    {
        if (!isalpha(input[i]))
        {
            std::cout << "\033[0;31mError: First name can only contain letters.\033[0m" << std::endl;
            std::cout << "Please enter the first name:" << std::endl;
            std::getline(std::cin, input);
            if (std::cin.eof())
                  exit(0);
            i = 0; 
        }
    }
    contact.setFirstName(input);

    std::cout << "Please enter the last name:" << std::endl;
    std::getline(std::cin, input);
    if (std::cin.eof())
		  exit(0);
    while (input.empty())
    {
        std::cout << "\033[0;31mError: Last name cannot be empty.\033[0m" << std::endl;
        std::cout << "Please enter the last name:" << std::endl;
        std::getline(std::cin, input);
        if (std::cin.eof())
		      exit(0);
    }
    for (size_t i = 0; i < input.length(); i++)
    {
        if (!isalpha(input[i]))
        {
            std::cout << "\033[0;31mError: last name can only contain letters.\033[0m" << std::endl;
            std::cout << "Please enter the last name:" << std::endl;
            std::getline(std::cin, input);
            if (std::cin.eof())
                  exit(0);
            i = 0; 
        }
    }
    contact.setLastName(input);

    std::cout << "Please enter the NickName:" << std::endl;
    std::getline(std::cin, input);
    if (std::cin.eof())
		  exit(0);
    while (input.empty())
    {
        std::cout << "\033[0;31mError: NickName cannot be empty.\033[0m" << std::endl;
        std::cout << "Please enter the NickName:" << std::endl;
        std::getline(std::cin, input);
        if (std::cin.eof())
		      exit(0);
    }
    contact.setNickName(input);

    std::cout << "Please enter phone Number:" << std::endl;
    std::getline(std::cin, input);
    if (std::cin.eof())
		  exit(0);
    while (input.empty())
    {
        std::cout << "\033[0;31mError: Phone Number cannot be empty.\033[0m" << std::endl;
        std::cout << "Please enter phone Number:" << std::endl;
        std::getline(std::cin, input);
        if (std::cin.eof())
		      exit(0);
    }
    
    bool isValidNumber = true;
    for (size_t i = 0; i < input.length(); ++i)
    {
        if (i == 0 && input[i] == '+')
            continue;
        if (!isdigit(input[i]))
        {
            isValidNumber = false;
            break;
        }
    }

    while (!isValidNumber)
    {
        std::cout << "\033[0;31mError: Phone Number can only contain digits.\033[0m" << std::endl;
        std::cout << "Please enter phone Number:" << std::endl;
        std::getline(std::cin, input);
        if (std::cin.eof())
              exit(0);
        isValidNumber = true;
        for (size_t i = 0; i < input.length(); ++i)
        {
            if (i == 0 && input[i] == '+')
                continue;
            if (!isdigit(input[i]))
            {
                isValidNumber = false;
                break;
            }
        }
    }
    contact.setNumber(input);

    std::cout << "Please enter the Darkest Secret:" << std::endl;
    std::getline(std::cin, input);
    if (std::cin.eof())
		  exit(0);
    while (input.empty())
    {
        std::cout << "\033[0;31mError: Darkest Secret cannot be empty.\033[0m" << std::endl;
        std::cout << "Please enter the Darkest Secret:" << std::endl;
        std::getline(std::cin, input);
        if (std::cin.eof())
		      exit(0);
    }
    contact.setDarkestSecret(input);
}
void PhoneBook::search()
{
    if (count == 0)
    {
        std::cout << "No contacts yet." << std::endl;
        return;
    }
    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|";
    check_10("Index");
    check_10("First name");
    check_10("Last name");
    check_10("NickName");
    std::cout << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
    int size = 0;
    if (count <= 8)
      size = count;
    else if (count > 8)
    {
      size = 8;
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << "|";


        std::cout << "         " << contacts[i].getIndex() << "|";
        check_10(contacts[i].getFirstName());
        check_10(contacts[i].getLastName());
        check_10(contacts[i].getNickName());
        std::cout << std::endl;
    }
    std::cout << "|-------------------------------------------|" << std::endl;

    std::string input;
    std::cout << "\033[36m Please enter the index of the contact to view or \n press 0 to exit the search mode: \033[0m ";
    std::getline(std::cin, input);
    if (std::cin.eof())
		  exit(0);
    int index = std::atoi(input.c_str());
    
    if (index > 0 && index <= 8 && index <= count)
    {
        Contact c = contacts[index - 1];
        std::cout << "First Name: " << c.getFirstName() << std::endl;
        std::cout << "Last Name: " << c.getLastName() << std::endl;
        std::cout << "NickName: " << c.getNickName() << std::endl;
        std::cout << "Phone Number: " << c.getNumber() << std::endl;
        std::cout << "Darkest Secret: " << c.getDarkestSecret() << std::endl;
    }
    else if (index == 0)
    {
        std::cout << " \033[0;31m Exiting search mode now 🏃 \033[0m" << std::endl;
        return;
    }
    else
    {
        std::cout << "\033[0;31m ✖ ERROR: Invalid index ✖\033[0m" << std::endl;
    }
}
