#include "HumanA.hpp"

const std::string &HumanA::getname() const
{
	return (this->name);
}
void HumanA::setname(const std::string &name)
{
	this->name = name;
}
void HumanA::attack()
{
	std::cout << this->name << "attacks with their" << std::endl;
}

