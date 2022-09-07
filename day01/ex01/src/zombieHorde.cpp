#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *cr_zombieHorde = new Zombie[N];

    for (int i = 0; i < N; i++)
        cr_zombieHorde[i].setName(name);
    return (cr_zombieHorde);
}
