#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class   ClapTrap {
private:
    std::string _name;
    int _hitpnts;
    int _energypnts;
    int _attackdamage;
public:
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(const ClapTrap&);
    ClapTrap& operator=(const ClapTrap&);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif