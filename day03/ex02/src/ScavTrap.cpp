#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "Constructor ScavTrap called " << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "Constructor ScavTrap called " << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& input) : ClapTrap(input)
{
	*this = input;
	std::cout << "copy constructor ScavTrap" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Destructor ScavTrap called " << std::endl;
}

ScavTrap&   ScavTrap::operator=(ScavTrap const & rightSide)
{
    std::cout << "operator = called (ScavTrap)" << std::endl;
    if (this == &rightSide)
        return *this;
    this->name = rightSide.name;
    this->hit_points = rightSide.hit_points;
    this->attack_damage = rightSide.attack_damage;
    return *this;
}

void		ScavTrap::attack(const std::string& target) {
	if (!hit_points) {
		std::cout << "ScavTrap " << this->name << " is dead. RIP" << std::endl;
		return;
	}
	if (energy_points > 0) {
		std::cout << "ScavTrap " << this->name << " attacks " << target;
		std::cout << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		energy_points--;
	}
	else
		std::cout << "ScavTrap " << this->name << ": Not enogh EP" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

// void ScavTrap::takeDamage(unsigned int amount)
// {
// 	if (hit_points == 0) {
// 		std::cout << "ClapTrap " << this->name << " is dead. RIP" << std::endl;
// 		return;
// 	}
// 	if (amount < hit_points)
// 		hit_points -= amount;
// 	else
// 		hit_points = 0;
// 	std::cout << "ClapTrap " << this->name << " has taken -";
// 	std::cout << amount << "HP of damage";
// 	if (hit_points <= 0) {
// 		std::cout << " and died" << std::endl;
// 		return;
// 	}
// 	std:: cout << std::endl;
// }

// void    ScavTrap::beRepaired(unsigned int amount)
// {
// 	if (!hit_points) {
// 		std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
// 		return;
// 	}
// 	if (energy_points > 0) {
// 		std::cout << "ClapTrap " << this->name << " is repaired himself +" << amount << "HP" << std::endl;
// 		energy_points--;
// 		hit_points += amount;
// 	}
// 	else
// 		std::cout << "ClapTrap " << this->name << " no enogh energy" << std::endl;
// }