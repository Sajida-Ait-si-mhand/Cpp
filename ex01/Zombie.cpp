#include "Zombie.hpp"
Zombie::Zombie()
{
}

Zombie::~Zombie()
{
     std::cout   << this->name << "'s Zobie get gestroyed" << std::endl;
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