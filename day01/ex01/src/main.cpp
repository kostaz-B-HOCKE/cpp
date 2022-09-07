#include <iostream>
#include <string>
#include "Zombie.hpp"

void	announce(int N, Zombie *ZombieHorde)
{
	for (int i = 0; i < N; i++)
	{
		std::cout << ZombieHorde[i].getName() << " родился" << std::endl;
	}
}

int	main(void)
{
	int n;

	n = 4;
	Zombie *ZombieHorde = zombieHorde(n, "Alex");
	announce(n, ZombieHorde);
	delete [] ZombieHorde;
}
