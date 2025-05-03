#include "Zombie.hpp"

 Zombie*  Zombie::newZombie(std::string name)
{
    Zombie *iptr = new Zombie();
    
    iptr->setname(name);
    return (iptr);
}
