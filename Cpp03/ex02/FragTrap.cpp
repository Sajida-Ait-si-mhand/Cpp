#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default") {
    Hintspointx = 100;
    EnergyPoints = 100;
    AttackDamge = 30;
    std::cout << "FragTrap default constructor called\n";
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    Hintspointx = 100;
    EnergyPoints = 100;
    AttackDamge = 30;
    std::cout << "FragTrap named constructor called for " << Name << "\n";
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "FragTrap copy constructor called\n";
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    ClapTrap::operator=(other);
    std::cout << "FragTrap copy assignment called\n";
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called for " << Name << "\n";
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << Name << " requests high fives! ✋\n";
}
