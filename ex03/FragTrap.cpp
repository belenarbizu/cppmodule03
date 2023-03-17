#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_name = name;
    this->_hit = 100;
    this->_energy = 100;
    this->_attackdamage = 30;
    std::cout << "FragTrap " << this->_name << " created" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->_name << " destroyed" << std::endl;
}

FragTrap::FragTrap(const FragTrap& ft) : ClapTrap(ft)
{
    *this = ft;
    std::cout << this->_name << " has been copied" << std::endl;
}

FragTrap& FragTrap::operator= (const FragTrap& ft)
{
    this->_name = ft._name;
    this->_hit = ft._hit;
    this->_energy = ft._energy;
    this->_attackdamage = ft._attackdamage;
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << this->_name << " is giving high fives!" << std::endl;
}