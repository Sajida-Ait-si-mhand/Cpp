#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <sstream>
#include <cctype>

class Contact
{
	private:
		std::string darkestSecret;
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string Number; 
		int Index;
	public:
		
		const std::string &getDarkestSecret() const;
		const std::string &getFirstName() const;
		const std::string &getLastName() const;
		const std::string &getNickName() const;
		const std::string &getNumber() const;
		const int &getIndex() const;
		
        void setDarkestSecret(const std::string &darkestSecret);
        void setFirstName(const std::string &FirstName);
        void setLastName(const std::string &LastName);
        void setNickName(const std::string &NickName);
		void setNumber(const std::string &Number);
		void setIndex(const int &Index);

		
};

#endif