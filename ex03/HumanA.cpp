#include "HumanA.hpp"


HumanA::HumanA(const std::string &name,Weapon &weapon):name(name), weapon(weapon)
{
}

HumanA::~HumanA()
{
	std::cout << "ending of the HumanA" << std::endl;
}
const std::string &HumanA::getname() const
{
	return (this->name);
}

void HumanA::setname(const std::string &name)
{
	this->name = name ;
}
void HumanA::attack()
{
	std::cout << HumanA::getname() <<  " attacks with their " << weapon.getType() << std::endl;
}