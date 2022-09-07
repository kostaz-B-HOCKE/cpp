#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include <cmath> 

class ScavTrap : public ClapTrap
{

protected:
	static unsigned int const	hitPoints = 100;
	static unsigned int const	energyPoints = 50;
	static unsigned int const	attackDamage = 20;

public:

    ScavTrap();
    ScavTrap(std::string in_name);
    ScavTrap(const ScavTrap& input);
    ~ScavTrap();
    
    ScavTrap&   operator=(ScavTrap const & rightSide);
    void guardGate();
    void    attack(const std::string& target);
};

#endif
