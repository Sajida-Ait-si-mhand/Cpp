#include "Weapon.hpp"

Weapon::Weapon()
{
    std::cout << "this is the opening" << std::endl;
}
Weapon::~Weapon()
{
    std::cout << "finish him" << std::endl;
}
void Weapon::setType(const std::string &type) 
{
    this->Type = Type;
}

const std::string &Weapon::getType() const 
{
   return(this->Type);
}