#include "Weapon.hpp"




Weapon::Weapon() : type("")  
{
}

Weapon::Weapon(const std::string &type) : type(type)  
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