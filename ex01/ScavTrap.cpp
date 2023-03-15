#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
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

ScavTrap::ScavTrap(const ScavTrap& st)
{
    *this = st;
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

}

void ScavTrap::takeDamage(unsigned int amount)
{

}

void ScavTrap::beRepaired(unsigned int amount)
{

}

void ScavTrap::guardGate(void)
{

}