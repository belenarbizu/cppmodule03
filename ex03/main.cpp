#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap dt("Bob");
    dt.attack("Kevin");
    dt.whoAmI();
    return (0);
}