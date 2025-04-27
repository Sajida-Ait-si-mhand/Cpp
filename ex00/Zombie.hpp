#pragma once 

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        // constracter && destractor
        Zombie();
        ~Zombie();

        // Getter && Setter
        void setname(const std::string &name);
        const std::string &getname() const;

        // Methods:
        void announce( void );
        

};

//function:
Zombie* newZombie( std::string name );
void randomChump( std::string name );
