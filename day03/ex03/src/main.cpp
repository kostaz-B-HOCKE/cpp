#include "FlagTrap.hpp"
#include "DiamondTrap.hpp"

int main( void ) {

	DiamondTrap Man_1("Man_1");
	DiamondTrap Man_2("Man_2");

	std::cout << std::endl;
	Man_1.whoAmI();
	Man_1.guardGate();
	Man_1.highFivesGuys();
	std::cout << std::endl;
	Man_2.whoAmI();
	Man_2.guardGate();
	Man_2.highFivesGuys();
	std::cout << std::endl;
	Man_1.attack(Man_2.getName());
	Man_2.takeDamage(Man_1.getDamage());
	Man_2.attack(Man_1.getName());
	Man_1.takeDamage(Man_2.getDamage());

	Man_1.attack(Man_2.getName());
	Man_2.takeDamage(Man_1.getDamage());
	Man_1.attack(Man_2.getName());
	Man_2.takeDamage(Man_1.getDamage());
	Man_1.attack(Man_2.getName());
	Man_2.takeDamage(Man_1.getDamage());
	Man_1.attack(Man_2.getName());
	Man_2.takeDamage(Man_1.getDamage());
	std::cout << std::endl;
	std::cout << "??????????????????????" << std::endl;
	Man_1.whoAmI();
	Man_2.whoAmI();

	return (0);
}
