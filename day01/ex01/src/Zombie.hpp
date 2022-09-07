#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{

public:

	Zombie( void );
	~Zombie( void );

	std::string name_zombie(void);
	bool	setName(std::string newName);
	std::string	getName(void);

private:
	void	prefix( void ) const;
	std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
