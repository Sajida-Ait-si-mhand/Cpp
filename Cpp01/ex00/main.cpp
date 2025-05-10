#include "Zombie.hpp"

int main()
{
    Zombie *obj = newZombie("Foo");

    obj->announce();
    delete obj;
    randomChump("bar");
    return 0;
}