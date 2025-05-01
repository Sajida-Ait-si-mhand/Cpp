#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    Weapon club = Weapon("crude spiked club");
    
    // Test for HumanA
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    
    // Test for HumanB
    HumanB jim("Jim");
    jim.setWeapon(club);  // Set the weapon for HumanB
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
    
    return 0;
}
