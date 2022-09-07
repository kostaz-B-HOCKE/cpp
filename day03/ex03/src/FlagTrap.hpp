#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include <iostream>
#include <string>
#include <cmath> 
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FlagTrap : public ClapTrap
{

public:
    FlagTrap();
    FlagTrap(std::string name);
    FlagTrap(const FlagTrap& input);
    ~FlagTrap();

    FlagTrap&   operator=(const FlagTrap & rightSide);

    void highFivesGuys(void);


};

#endif