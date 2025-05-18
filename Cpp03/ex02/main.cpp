#include "FragTrap.hpp"

int main() {
    FragTrap bot("Fraggy");

    bot.attack("a random enemy");
    bot.takeDamage(20);
    bot.beRepaired(10);
    bot.highFivesGuys();

    return 0;
}
