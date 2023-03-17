#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_name = name;
    this->_hit = 100;
    this->_energy = 50;
    this->_attackdamage = 20;
    std::cout << this->_name << " robot created" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << this->_name << " robot destroyed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& st) : ClapTrap(st)
{
    *this = st;
    std::cout << this->_name << " has been copied" << std::endl;
}

ScavTrap& ScavTrap::operator= (const ScavTrap& st)
{
    this->_name = st._name;
    this->_hit = st._hit;
    this->_energy = st._energy;
    this->_attackdamage = st._attackdamage;
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_hit <= 0)
        std::cout << "No hit points left" << std::endl;
    else if (this->_energy <= 0)
        std::cout << "No energy points left" << std::endl;
    else
    {
        this->_energy--;
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackdamage << " points of damage!" << std::endl;
    }
}

void ScavTrap::guardGate(void)
{
    std::cout << this->_name << " is now in Gate keeper mode" << std::endl;
}