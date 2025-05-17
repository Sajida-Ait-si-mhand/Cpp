#include "ClapTrap.hpp"

int main() {
    ClapTrap a("RobotA");
    ClapTrap b("RobotB");

    // RobotA attacks RobotB
    a.attack("RobotB");

    // RobotB takes damage
    b.takeDamage(3);

    // RobotB repairs itself
    b.beRepaired(2);

    // RobotA attacks again
    a.attack("RobotB");

    // RobotB takes more damage
    b.takeDamage(5);

    // Deplete RobotA's energy
    for (int i = 0; i < 10; i++)
        a.attack("RobotB");

    // Try to attack with no energy
    a.attack("RobotB");

    return 0;
}
