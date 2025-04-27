#include "Zombie.hpp"


Zombie::Zombie()
{
    this->name = "unknown";
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

// creating new zombies:
Zombie*  newZombie(std::string name)
{
    Zombie *iptr = new Zombie();
    // Zombie *iptr = new Zombie();
    iptr->setname(name);
    return (iptr);
}
