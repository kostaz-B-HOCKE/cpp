#include "ClapTrap.hpp"

int main( void ) {

	ClapTrap a;

	std::cout << "START" << std::endl;
	a.attack("kot");
	a.takeDamage(1);
	a.beRepaired(1);

	return (0);
}
