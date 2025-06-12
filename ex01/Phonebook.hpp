#pragma once

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int count;
	public:
		PhoneBook();
		void search();
		void check_10(std::string value);
		void type_your_infos(Contact &contact);
		void add();
};
