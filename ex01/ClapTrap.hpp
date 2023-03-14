#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class   ClapTrap {
private:
    std::string _name;
    int _hit;
    int _energy;
    int _attackdamage;
public:
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(const ClapTrap& cp);
    ClapTrap& operator= (const ClapTrap& cp);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif