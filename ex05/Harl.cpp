#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "Debuging" << std::endl;
}

void Harl::info( void )
{
    std::cout << "infos" << std::endl;
}
void Harl::warning()
{
    std::cout << "Warning" << std::endl;
}

void Harl::error( void )
{
    std::cout << "error" << std::endl;
}
void Harl::complain( std::string level)
{
    static std::string array[4] = {"debug", "info", "warning", "erro"};

    static void (Harl::*pointers[4])() =
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    for (int i = 0; i < 4 ; i++)
    {
        if (array[i] ==  level )
            //call the private function via the ptr
        {
            (this->*pointers[i])();
            return ;
        }
    
    }
    std::cout << "unknown" << std::endl;
}

