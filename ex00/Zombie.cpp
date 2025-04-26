#include "Zombie.hpp"



const std::string &Zombie::getName() const 
{
    return (this->Name);
}

void Zombie::setName(const std::string &Name)
{
    this->Name = Name;
}

// Zombie* newZombie( std::string name )
// {
//     Zombie* iptr = new Zombie(name) ;
//     return (iptr);
// }

void Zombie::announce()
{
    // << newZombie("FOO:")
    std::cout  << "BraiiiiiiinnnzzzZ..." << std::endl;
}

// void randomChump( std::string name )
// {
//     //It creates a zombie, name it, and the zombie announces itself.
// }