#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->Name =  name;
	this->Hintspointx = 100;
	this->AttackDamge = 20;
	this->EnergyPoints = 50;
	std::cout << name << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}
void ClapTrap::attack(const std::string& target)
{
	if (EnergyPoints > 0 && Hintspointx > 0)
	{
		std::cout << "ClapTrap " << Name << " attacks " << target 
		          << ", causing " << AttackDamge << " points of damage!" << std::endl;
		EnergyPoints--;
	}
	else
		std::cout << "ClapTrap " << Name << " has no energy or is dead!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage!" << std::endl;
	Hintspointx -= amount;
	if (Hintspointx < 0)
		 Hintspointx = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (EnergyPoints > 0 && Hintspointx > 0)
	{
		std::cout << "ClapTrap " << Name << " repairs itself, recovering " 
		          << amount << " hit points!" << std::endl;
		Hintspointx += amount;
		EnergyPoints--;
	}
	else
		std::cout << "ClapTrap " << Name << " cannot repair itself!" << std::endl;
}

