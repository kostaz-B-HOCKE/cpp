#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void): name("")
{
}

Zombie::~Zombie(void)
{
	Zombie::prefix();
	std::cout << "*Sounds of dying again*" << std::endl;
}

std::string Zombie::name_zombie(void)
{
	return (this->name);
}

//for the destructor
void	Zombie::prefix( void ) const
{
	std::cout << "<" << this->name << "> ";
}

std::string	Zombie::getName(void)
{
	return (this->name);
}

bool	Zombie::setName(std::string newName)
{
	if (newName == "")
		return (false);
	this->name = newName;
	return (true);
}
