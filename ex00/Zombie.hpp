#pragma once 

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <sstream>
#include <cctype>

class Zombie {

    private:
        std::string Name;
    public:
        void announce( void );
        const std::string &getName() const;

        void setName(const  std::string &Name);

        Zombie();
        ~Zombie();
};