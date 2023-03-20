#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class   ScavTrap: public virtual ClapTrap {
public:
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap(const ScavTrap& st);
    ScavTrap& operator= (const ScavTrap& st);

    void attack(const std::string& target);
    void guardGate(void);
};

#endif