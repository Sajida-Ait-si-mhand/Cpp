#pragma once
#include <iostream>
#include "Weapon.hpp"
#include <string>

class HumanA
{
	private:
		std::string name;
		Weapon &weapon;
	public:
		// G && S
		const std::string &getname() const;
		void setname(const std::string &name);
		 
		// Methdos:
		void attack();
		//C && D
		HumanA(const std::string &name,Weapon &weapon);
		~HumanA();
};

