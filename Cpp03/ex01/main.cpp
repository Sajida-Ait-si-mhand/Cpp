#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    std::cout << "=== Creating a ClapTrap ===\n";
    {
        ClapTrap clap("Jenny Wakeman ");
        clap.attack("TARGET");
        clap.takeDamage(5);
        clap.beRepaired(3);
    }

    std::cout << "\n=== Creating a ScavTrap ===\n";
    {
        ScavTrap scav("XR-12 ");
        scav.attack("ENEMY");
        scav.takeDamage(20);
        scav.beRepaired(10);
        scav.guardGate();

        for (int i = 0; i < 55; ++i)
            scav.attack("ENEMY");
    }

    return 0;
}
