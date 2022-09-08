#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    name = "Guest";
    attack_damage = 0;
    energy_points = 10;
    hit_points = 10;
	std::cout << "Default constructor called (ClapTrap)" << std::endl;
}

ClapTrap::ClapTrap(std::string _name)
{
    name = _name;
    attack_damage = 0;
    energy_points = 10;
    hit_points = 10;
	std::cout << "Parametric constructor called (ClapTrap)" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called (ClapTrap)" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& input)
{
	*this = input;
	std::cout << "Copy constructor ClapTrap called" << std::endl;
}

ClapTrap&   ClapTrap::operator=(ClapTrap const & rightSide)
{
    std::cout << "Allignment operator called" << std::endl;
    if (this == &rightSide)
        return *this;
    this->name = rightSide.name;
    this->hit_points = rightSide.hit_points;
    this->attack_damage = rightSide.attack_damage;
    return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	// std::cout << "ClapTrap.attack" << std::endl;
    if (this->hit_points == 0) {
        std::cout << "ClapTrap " << this->name << " RIP" << std::endl;
        return ;
    }
    if (energy_points > 0) {
        std::cout << "ClapTrap " << this->name << " attacks " << target;
		std::cout << ", causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
    }
    else
        std::cout << "ClapTrap" << this->name << " no attack, no energy"  << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!hit_points) {
		std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
		return;
	}
	if (energy_points > 0) {
		std::cout << "ClapTrap " << this->name << " is repaired himself +" << amount << "HP" << std::endl;
		energy_points--;
		hit_points += amount;
	}
	else
		std::cout << "ClapTrap " << this->name << " no enogh energy" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points == 0) {
		std::cout << "ClapTrap " << this->name << " is dead. RIP" << std::endl;
		return;
	}
	if (amount < hit_points)
		hit_points -= amount;
	else
		hit_points = 0;
	std::cout << "ClapTrap " << this->name << " has taken -";
	std::cout << amount << "HP of damage";
	if (hit_points <= 0) {
		std::cout << " and died" << std::endl;
		return;
	}
	std:: cout << std::endl;
}

std::string	ClapTrap::getName() {
	return name;
}

unsigned	ClapTrap::getDamage() {
	return attack_damage;
}
