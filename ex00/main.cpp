#include "Zombie.hpp"


int main()
{
    Zombie obj;
    obj.announce();
    obj.setname("Sojod");
    std::cout << obj.getname();
    return 0;
}