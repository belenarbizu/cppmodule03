#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class   ScavTrap {
private:
    std::string _name;
    int _hit;
    int _energy;
    int _attackdamage;
public:
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap(const ScavTrap& cp);
    ScavTrap& operator= (const ScavTrap& cp);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif