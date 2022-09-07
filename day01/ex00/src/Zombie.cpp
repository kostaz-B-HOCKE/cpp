#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( std::string name ): name(name)
{
}

Zombie::~Zombie(void)
{
	Zombie::prefix();
	std::cout << "*Sounds of dying again*" << std::endl;
}

void Zombie::print_hello(void)
{
	std::cout << ("BraiiiiiiinnnzzzZ...") << std::endl;
}

std::string Zombie::name_zombie(void)
{
	return (this->name);
}

void	Zombie::prefix( void ) const
{
	std::cout << "<" << this->name << "> ";
}
