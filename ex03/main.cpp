#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap cp("Bob");
    ScavTrap st("Peter");
    ScavTrap st2(st);
    FragTrap ft("Jay");
    cp.attack("Kevin");
    cp.attack("Ash");
    st.attack("Bob");
    ft.attack("Kevin");
    ft.takeDamage(50);
    cp.takeDamage(4);
    cp.beRepaired(3);
    st.guardGate();
    ft.highFivesGuys();
    return (0);
}