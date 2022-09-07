#include "FlagTrap.hpp"

FlagTrap::FlagTrap() : ClapTrap()
{
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
}

FlagTrap::FlagTrap(std::string name) : ClapTrap()
{
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
}

FlagTrap::~FlagTrap()
{
    std::cout << "Destructor FlagTrap called" << std::endl;
}

FlagTrap& FlagTrap::operator=(const FlagTrap & rightSide)
{
    std::cout << "operator = called (FlagTrap)" << std::endl;
    if (this == &rightSide)
        return *this;
    this->name = rightSide.name;
    this->hit_points = rightSide.hit_points;
    this->attack_damage = rightSide.attack_damage;
    return *this;
}

FlagTrap::FragTrap(const FragTrap& input)
{
    *this = input;
    std::cout << " " << std::endl;
}

void FlagTrap::highFivesGuys(void)
{
    std::cout << "Buddy high five" << std::endl;
}

