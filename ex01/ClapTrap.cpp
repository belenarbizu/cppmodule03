#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    this->_hit = 10;
    this->_energy = 10;
    this->_attackdamage = 0;
    std::cout << this->_name << " created" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << this->_name << " destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& cp)
{
    *this = cp;
    std::cout << this->_name << " has been copied" << std::endl;
}

ClapTrap& ClapTrap::operator= (const ClapTrap& cp)
{
    this->_name = cp._name;
    this->_hit = cp._hit;
    this->_energy = cp._energy;
    this->_attackdamage = cp._attackdamage;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_hit <= 0)
        std::cout << "No hit points left" << std::endl;
    else if (this->_energy <= 0)
        std::cout << "No energy points left" << std::endl;
    else
    {
        this->_energy--;
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackdamage << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit <= 0)
        std::cout << "No hit points left" << std::endl;
    else if (this->_energy <= 0)
        std::cout << "No energy points left" << std::endl;
    else
    {
        this->_hit -= amount;
        std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hit <= 0)
        std::cout << "No hit points left" << std::endl;
    else if (this->_energy <= 0)
        std::cout << "No energy points left" << std::endl;
    else
    {
        this->_hit += amount;
        this->_energy--;
        std::cout << "ClapTrap " << this->_name << " repairs itself, getting " << amount << " points of hit back!" << std::endl;
    }
}