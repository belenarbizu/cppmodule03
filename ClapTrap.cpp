#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    this->_hitpnts = 10;
    this->_energypnts = 10;
    this->_attackdamage = 0;
    std::cout << this->_name << " created" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << this->_name << " destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap&)
{

}

ClapTrap::ClapTrap& operator=(const ClapTrap&)
{
    
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_hitpnts == 0)
        std::cout << "No hit points left" << std::endl;
    else if (this->_energypnts == 0)
        std::cout << "No energy points left" << std::endl;
    else
    {

    }
}

void ClapTrap::takeDamage(unsigned int amount)
{

}

void ClapTrap::beRepaired(unsigned int amount)
{

}