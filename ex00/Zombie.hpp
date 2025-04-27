#pragma once 

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        void setname(const std::string name);
        const std::string &getname() const;

        // Methods:

        void announce( void );
        // Zombie* newZombie( std::string name );
        // void randomChump( std::string name );

};