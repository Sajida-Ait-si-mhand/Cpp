#include "Zombie.hpp"

//getter:
void Zombie::setname(const std::string name)
{
    this->name = name;
}

const std::string &Zombie::getname() const
{
    return (this->name);
}

void Zombie::announce(void)
{
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl ;
}
