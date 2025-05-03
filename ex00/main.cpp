#include "Zombie.hpp"

int main()
{
    Zombie *obj = Zombie::newZombie("Foo");
    Zombie sec;
    
    sec = *obj;
    sec.announce();
    delete obj;
    randomChump("bar");
    return 0;
}