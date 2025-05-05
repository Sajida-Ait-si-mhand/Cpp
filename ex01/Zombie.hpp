#pragma once 

#include <iostream>
#include <cstdlib>
#include <sstream> 
#include <climits>

class Zombie 
{
    private:
        std::string name;
        int N;
    public:
        // METHODS :
        void announce( void );

        // Getter && Setter :
        void setname(const std::string &name);
        void setN(const int &N);

        const std::string &getname() const;
        const int &getN() const;


        //Constracter && Destractor :
        Zombie();
        ~Zombie();

};

Zombie* zombieHorde( int N, std::string name );