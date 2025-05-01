#include "Weapon.hpp"




Weapon::Weapon() : type("")  // Default constructor with empty string initialization
{
}

Weapon::Weapon(const std::string &type) : type(type)  // Constructor that initializes 'type'
{
}

Weapon::~Weapon()
{
	std::cout << "FINIL WEAPON" << std::endl;
}
void Weapon::setType(const std::string &type)
{
	this->type = type;
}

const std::string &Weapon::getType() const
{
	return (this->type);}