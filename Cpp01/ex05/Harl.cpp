#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. "
    "You did not put enough bacon in my burger! If you did"
    ", I would not  be asking for more!" << std::endl;
}
void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. "
    " I have been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level)
{
    std::string array[4] = {"debug", "info", "warning", "error"};

    void (Harl::*pointers[4])() =
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    for (int i = 0; i < 4 ; i++)
    {
        if (array[i] ==  level )
        {
            (this->*pointers[i])();
            return ;
        }
    
    }
    std::cout << "unknown" << std::endl;
}

