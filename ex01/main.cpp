#include "Zombie.hpp"


int main()
{
    Zombie obj ;

    std::string input;
    int num;

    std::cout << "Please enter Name of your Zombie: ";
    std::getline(std::cin, input);
    if(std::cin.eof())
        exit(0);
    obj.setname(input);

    std::cout << std::endl;
    std::cout << "Please enter the Number of Your Zombies: ";
    std::cin >> num;
    std::cout << std::endl;
    obj.setN(num);

    Zombie *obj1 = zombieHorde(num, input);
    delete [] obj1;
    // obj.announce();
    //deleing the zombies:()
    return 0;
}