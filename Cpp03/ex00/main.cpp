#include "ClapTrap.hpp"

int main() {
    ClapTrap c("Charger");

    c.takeDamage(8);

    c.takeDamage(5);

    c.attack("AnyTarget");

    c.beRepaired(3);

    return 0;
}
