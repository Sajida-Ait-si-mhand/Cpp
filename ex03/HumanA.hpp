#pragma once

#include "Weapon.hpp"

class HumanA
{
    private:
		std::string name;
    public:
		const std::string &HumanA::getname() const;
		void HumanA::setname(const std::string &name);
		void attack();
		Weapon::getType();
};
