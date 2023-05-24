#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap cp("Bob");
    cp.attack("Kevin");
    cp.attack("Ash");
    cp.takeDamage(4);
    cp.takeDamage(4);
    cp.beRepaired(3);
    cp.beRepaired(3);
    cp.beRepaired(3);
    cp.beRepaired(3);
    cp.takeDamage(4);
    cp.beRepaired(3);
    cp.beRepaired(3);
    cp.attack("Kevin");
    cp.attack("Ash");
    cp.beRepaired(3);
    return (0);
}