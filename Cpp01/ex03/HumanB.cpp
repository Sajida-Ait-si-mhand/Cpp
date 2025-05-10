#include "HumanB.hpp"


HumanB::HumanB(const std::string &name) : name(name), weapon(NULL)
{
}

HumanB::~HumanB()
{
	std::cout << "ending of the HumanB" << std::endl;
}

const std::string &HumanB::getname() const
{
	return (this->name);
}

void HumanB::setname(const std::string &name)
{
	this->name = name ;
}

void HumanB::setWeapon(Weapon &w)  // Implement setWeapon
{
    weapon = &w;
}
void HumanB::attack()
{
	if (weapon)
		std::cout << HumanB::getname() <<  " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << HumanB::getname() <<"  no weapon ! "<< std::endl;
}