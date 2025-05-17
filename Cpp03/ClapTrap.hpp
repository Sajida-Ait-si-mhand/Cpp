#pragma once 
#include <iostream>

class ClapTrap
{
	private:
		std::string Name;
		// points:
		int Hintspointx;
		int EnergyPoints;
		int AttackDamge;
	public:
		// methods:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		ClapTrap(std::string Name);
		~ClapTrap();
};
