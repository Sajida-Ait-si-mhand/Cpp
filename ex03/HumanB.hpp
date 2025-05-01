// #pragma once
// #include <iostream>
// #include "Weapon.hpp"
// class HumanB
// {
// 	private:
// 		std::string name;
// 		Weapon &weapon;
// 	public:
// 		// G && S
// 		const std::string &getname() const;
// 		void setname(const std::string &name);
		 
// 		// Methdos:
// 		void attack();
// 		//C && D
// 		HumanB(const std::string &name, Weapon &weapon = NULL);  // Default weapon to nullptr
// 		~HumanB();
// };

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
    // Constructor accepting a reference to a Weapon
    HumanB(const std::string &name);

    ~HumanB();

    // Getter and setter
    const std::string &getname() const;
    void setname(const std::string &name);
	void setWeapon(Weapon &w);  // Declare the setter


    // Method
    void attack();
};
