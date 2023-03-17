#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, ScavTrap {
private:
    std::string _name;
public:
    DiamondTrap(std::string name);
    ~DiamondTrap();
    DiamondTrap(const DiamondTrap& dt);
    DiamondTrap& operator= (const DiamondTrap& dt);

    void attack(const std::string& target);
    void whoAmI(void);
};

#endif