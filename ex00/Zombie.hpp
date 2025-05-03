
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

        Zombie& operator=( const Zombie& other );

        // Methods:
        void announce( void );
        

        static Zombie* newZombie( std::string name );
};

//function:
void randomChump( std::string name );
