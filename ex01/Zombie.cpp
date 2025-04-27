#include "Zombie.hpp"
Zombie::Zombie()
{
    std::cout << "---" << std::endl;
    // this->name = "ZombieName🧟";
    // this->N = 99;
}

Zombie::~Zombie()
{
     std::cout  << "             " << "🩸"<< this->name << "🩸" << std::endl;
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