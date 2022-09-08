#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include <iostream>
#include <string>
#include <cmath> 
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FlagTrap : public virtual ClapTrap
{

public:
    FlagTrap();
    FlagTrap(std::string name);
    FlagTrap(const FlagTrap& input);
    ~FlagTrap();

    FlagTrap&   operator=(const FlagTrap & rightSide);

    void highFivesGuys(void);

protected:

	static unsigned int const	hitPoints = 100;
	static unsigned int const	energyPoints = 100;
	static unsigned int const	attackDamage = 30;

};

#endif
