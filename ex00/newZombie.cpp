#include "Zombie.hpp"

Zombie*  newZombie(std::string name)
{
    Zombie *iptr = new Zombie(name);

    // iptr->setname(name);
    return (iptr);
}