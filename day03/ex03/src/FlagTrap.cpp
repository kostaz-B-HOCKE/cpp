#include "FlagTrap.hpp"

FlagTrap::FlagTrap()
{
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
    std::cout << "Default constructor called (FlagTrap)" << std::endl;
}

FlagTrap::FlagTrap(std::string name) : ClapTrap(name)
{
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
    std::cout << "Parametric constructor called (FlagTrap)" << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap& input) : ClapTrap(input)
{
    *this = input;
    std::cout << "copy constructor called (FlagTrap)" << std::endl;
}

FlagTrap::~FlagTrap()
{
    std::cout << "Destructor called (FlagTrap)" << std::endl;
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

void FlagTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->name << " is giving high five" << std::endl;
}

