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
		// 		// Fight (attack),
		// Get hurt (takeDamage),
		// Heal (beRepaired),
		// And has stats (hit points, energy, damage
	public:
		// methods:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		ClapTrap(std::string Name);
		~ClapTrap();
};
