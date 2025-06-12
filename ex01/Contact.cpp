#include "Contact.hpp"

const std::string &Contact::getDarkestSecret() const
{
	return(this->darkestSecret);
}

void Contact::setDarkestSecret(const std::string &darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

const std::string &Contact::getFirstName() const
{
	return(this->FirstName);
}

void Contact::setFirstName(const std::string &FirstName)
{
	this->FirstName = FirstName;
}

const std::string &Contact::getLastName() const
{
	return(this->LastName);
}

void Contact::setLastName(const std::string &LastName)
{
	this->LastName = LastName;
}

const std::string &Contact::getNickName() const{
	return (this->NickName);
}

void Contact::setNickName(const std::string &NickName)
{
	this->NickName = NickName;
}

const std::string &Contact::getNumber() const
{
	return (this->Number);
}

void Contact::setNumber(const std::string &Number)
{
	this->Number = Number;
}
 
const int &Contact::getIndex() const
{
	return (this->Index);
}

void Contact::setIndex(const int &Index)
{
	this->Index = Index;
}