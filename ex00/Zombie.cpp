#include "Zombie.hpp"
Zombie::~Zombie(){
            // destroy the zombie (delete)
            // printing the name of the the zombie for more debugging 
            std::cout << " \033[0;31m-> deconstructor 🔪 \033[0;31m" << std::endl;
        };

Zombie::Zombie()
{
    std::cout <<  "   -> constructor 🤝" << std::endl;
};

const std::string &Zombie::getName() const 
{
    return (this->Name);
}

void Zombie::setName(const std::string &Name)
{
    this->Name = Name;
}
void Zombie::announce()
{
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}