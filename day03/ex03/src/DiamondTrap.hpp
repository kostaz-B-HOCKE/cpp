#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
//теряет эфективность при ромбовижной системе наследования

#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

class DiamondTrap : public ScavTrap, public FlagTrap
{

public:
    DiamondTrap();
    DiamondTrap(std::string _name);
    DiamondTrap(const DiamondTrap& input);
    ~DiamondTrap();

    DiamondTrap&   operator=(const DiamondTrap & rightSide);

    void whoAmI();

private:
    std::string name;

};

#endif
