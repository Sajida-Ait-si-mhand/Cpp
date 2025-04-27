#include "Zombie.hpp"

// Announcing the Zombie's Name:

void Zombie::announce( void )
{
    std::cout << " BraiiiiiiinnnzzzZ...  I am "  << this->name << std::endl;
}

// Creating the N's Zombis :
Zombie* zombieHorde( int N, std::string name )
{
    // (void)name;
    Zombie *zombies = new Zombie[N];
    for (int i = 0 ; i < N; i++)
    {
        zombies[i].setname(name);
        zombies[i].announce();
    }
    return(zombies);
}