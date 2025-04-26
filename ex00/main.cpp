#include "Zombie.hpp"
Zombie::Zombie()
{
    std::cout <<  "   -> constructor 🤝" << std::endl;
};

Zombie::~Zombie()
{ 
    std::cout << " \033[0;31m-> deconstructor 🔪 \033[0;31m" << std::endl;
};
int main()
{
    Zombie *zombiePtr =  NULL;
    zombiePtr->announce();
    // zombiePtr->setName("NAIMA");
    return 0;
}