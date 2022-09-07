#include "DiamondTrap.hpp"

// DiamondTrap::DiamondTrap()
// {
//     name = "GuestDiamod";
//     ClapTrap::name += "_(ClapTrap)";
//     hit_points = FlagTrap::hit_points;
//     energy_points = ScavTrap::energy_points;
//     attack_damage = FlagTrap::attack_damage;
//     std::cout << "Default constructor called (DiamondTrap)" << std::endl;
// }

DiamondTrap::DiamondTrap(std::string d_name)
{
    name = d_name;
    ClapTrap::name += "_(ClapTrap)";
    // hit_points = FlagTrap::hit_points;
    // energy_points = ScavTrap::energy_points;
    // attack_damage = FlagTrap::attack_damage;
    // std::cout << "Parametric constructor called (DiamondTrap)" << std::endl;
}

// DiamondTrap::DiamondTrap(const DiamondTrap& input)
// {
//     *this = input;
//     std::cout << "Copy constructor called (DiamondTrap)" << std::endl;
// }

// DiamondTrap&   DiamondTrap::operator=(const DiamondTrap & rightSide)
// {
//     std::cout << "Allignment operator (DiamondTrap)" << std::endl;
//     if (this == &rightSide)
//         return *this;
//     this->name = rightSide.name;
//     this->hit_points = rightSide.hit_points;
//     this->attack_damage = rightSide.attack_damage;
//     return *this;
// }

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor called (DiamondTrap)" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "whoAmI" << std::endl;
    // std::cout << "name: " << this->name << std::endl;
}

