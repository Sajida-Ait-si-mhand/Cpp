#include "Zombie.hpp"


Zombie::Zombie(std::string _name)
{
    this->name = _name;
}

Zombie::~Zombie()
{
    std::cout << this->name << " got destoyed" << std::endl;
}


// Getter:
void Zombie::setname(const std::string &name)
{
    this->name = name;
}
// Setter:
const std::string &Zombie::getname() const
{
    return (this->name);
}

//Announcing :
void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl ;
}

