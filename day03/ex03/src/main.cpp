#include "FlagTrap.hpp"

int main( void ) {

	FlagTrap	a;

	a.highFivesGuys();
	a.attack("Raider");
	a.takeDamage(1);
	a.attack("Raider");
	a.takeDamage(2);
	a.beRepaired(3);
	a.attack("Raider");
	a.takeDamage(4);
	a.beRepaired(5);
	a.attack("Raider");
	a.takeDamage(20);
	a.beRepaired(5);
	a.attack("Raider");
	a.takeDamage(30);
	a.beRepaired(5);
	for (int i = 0; i < 21; i++)
		a.attack("Raider");
	a.beRepaired(5);
	a.takeDamage(90);
	a.beRepaired(10);
	std::cout << std::endl;


	return (0);
}
