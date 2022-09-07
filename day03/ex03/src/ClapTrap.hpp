#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <cmath> 

class ClapTrap
{

public:

    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& input);
    ~ClapTrap(void);

    void    attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ClapTrap&   operator=(ClapTrap const & rightSide);

protected:

    std::string name;
    unsigned int energy_points;
    unsigned int attack_damage;
    unsigned int hit_points;
};

#endif
