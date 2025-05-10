#include "Zombie.hpp"
Zombie::Zombie()
{
    this->name = "unknown";
}

Zombie::~Zombie()
{
     std::cout   << this->name << "'s Zombie get gestroyed" << std::endl;
}

void Zombie::setname(const std::string &name)
{
    this->name = name;
}


void Zombie::setN(const int &N)
{
    this->N = N;
}


const std::string &Zombie::getname() const
{
    return (this->name);
}

const int &Zombie::getN() const
{
    return (this->N);
}

void Zombie::announce( void )
{
    std::cout << "BraiiiiiiinnnzzzZ...  I am "  << this->name << std::endl;
}