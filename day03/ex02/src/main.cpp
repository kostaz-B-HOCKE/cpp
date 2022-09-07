#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) {

	ScavTrap	a;

	a.guardGate();
	a.attack("Raider");
	a.takeDamage(5);
	a.attack("Raider");
	a.takeDamage(10);
	a.beRepaired(6);
	a.attack("Raider");
	a.takeDamage(50);
	a.beRepaired(7);
	a.attack("Raider");
	a.takeDamage(20);
	a.beRepaired(5);
	a.attack("Raider");
	a.takeDamage(30);
	a.beRepaired(5);
	for (int i = 0; i < 42; i++)
		a.attack("Raider");
	a.beRepaired(5);
	a.takeDamage(90);
	a.beRepaired(10);
	std::cout << std::endl;


	return (0);
}
