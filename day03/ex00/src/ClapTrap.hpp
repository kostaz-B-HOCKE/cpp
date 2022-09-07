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
    ~ClapTrap(void);

    void    attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ClapTrap&   operator=(ClapTrap const & rightSide);

private:

    std::string name;
    int enetgy_points;
    int attack_damage;
    int hit_points;
};

#endif
