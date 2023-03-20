#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap {
public:
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap(const FragTrap& ft);
    FragTrap& operator= (const FragTrap& ft);

    void highFivesGuys(void);
};

#endif