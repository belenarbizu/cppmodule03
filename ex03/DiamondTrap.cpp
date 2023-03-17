#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name)
{
    this->_name = name;
    this->ClapTrap::_name = name + "_clap_name";
    this->_hit = FragTrap::_hit;
    this->_energy = ScavTrap::_energy;
    this->_attackdamage = FragTrap::_attackdamage;
    std::cout << name << " monster created" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << this->_name << " monster destroyed" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& dt) : ScavTrap(dt), FragTrap(dt)
{
    *this = dt;
    std::cout << this->_name << " has been copied" << std::endl;
}

DiamondTrap& DiamondTrap::operator= (const DiamondTrap& dt)
{
    this->_hit = dt._hit;
    this->_energy = dt._energy;
    this->_attackdamage = dt._attackdamage;
    return *this;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap's name is " << this->_name << std::endl;
    std::cout << "ClapTrap's name is " << ClapTrap::_name << std::endl;
}