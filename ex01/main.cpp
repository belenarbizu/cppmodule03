#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap cp("Bob");
    ScavTrap st("Peter");
    ScavTrap st2(st);
    cp.attack("Kevin");
    cp.attack("Ash");
    st.attack("Bob");
    cp.takeDamage(4);
    cp.beRepaired(3);
    st.guardGate();
    return (0);
}