#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(const std::string& name)
  : ClapTrap(name)   
{
    std::cout << "ScavTrap " << name << " constructed!\n";
    Hintspointx    = 100;
    EnergyPoints =  50;
    AttackDamge =  20;
}


ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (EnergyPoints > 0 && Hintspointx > 0) {
        std::cout << "ScavTrap " << Name 
                  << " viciously attacks " << target
                  << ", dealing " << AttackDamge << " damage!\n";
        EnergyPoints--;
    } else {
        std::cout << "ScavTrap " << Name 
                  << " can't attack (no EP or HP)!\n";
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << Name << " is now in Gate keeper mode!\n";
}

