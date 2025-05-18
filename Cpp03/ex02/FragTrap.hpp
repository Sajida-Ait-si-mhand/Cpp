#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
    FragTrap();                         // Default constructor
    FragTrap(const std::string& name); // Param constructor
    ~FragTrap();                        // Destructor

    void highFivesGuys();              // Special function
};
