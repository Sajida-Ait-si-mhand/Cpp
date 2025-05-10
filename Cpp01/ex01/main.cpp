#include "Zombie.hpp"

int main()
{

    std::string input;
    std::string num;

    std::cout << "Please enter Name of your Zombie: ";
    std::getline(std::cin, input);
    if(std::cin.eof())
        exit(0);
    std::cout << std::endl;

    std::string numStr;
    std::cout << "Please enter the Number of Your Zombies: ";
    std::getline(std::cin, numStr);
    if (std::cin.eof()) exit(0);

    std::istringstream iss(numStr);
    long long tempCount;
    if ( !(iss  >> tempCount ) ||tempCount < 1 || tempCount > INT_MAX) {
        std::cerr << "Error: invalid number of zombies\n";
        return 1;
    }
    int count = static_cast<int>(tempCount);

    Zombie *obj1 = zombieHorde(count, input);
    if (!obj1)
        return 0;
    for (int i = 0 ; i < count; i++)
        obj1[i].announce();

    delete [] obj1;
    return 0;
}