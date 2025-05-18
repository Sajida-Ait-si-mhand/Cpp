#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap("DefaultFrag") {
    Hintspointx = 100;
    EnergyPoints = 100;
    AttackDamge = 30;
    std::cout << "FragTrap Default constructor called!" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    Hintspointx = 100;
    EnergyPoints = 100;
    AttackDamge = 30;
    std::cout << "FragTrap " << Name << " constructed!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << Name << " destroyed!" << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << Name << " says: High five, guys! ✋😄" << std::endl;
}
