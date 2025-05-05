
#pragma once
#include <iostream>
#include <cstddef>   
#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon *weapon ;

public:
    HumanB(const std::string &name);

    ~HumanB();

    // Getter and setter
    const std::string &getname() const;
    void setname(const std::string &name);
	void setWeapon(Weapon &w);  


    // Method
    void attack();
};
