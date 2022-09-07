#include <iostream>
#include <string>
#include "Zombie.hpp"

int
	main(void) {

	std::cout << ("Creating the first Zombie") << std::endl;
	{
		Zombie Zombie_one("Zombie_one");
		Zombie_one.print_hello();
	}
	std::cout << ("Creating the newZombie") << std::endl;
	{
		Zombie *Zombie_2 = newZombie("Zombie_2");
		Zombie_2->print_hello();
		delete (Zombie_2);
	}
	std::cout << ("Creating randomZombie") << std::endl;
		randomChump("Zombie_3");
}
