#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{

public:

	Zombie( std::string name);
	~Zombie( void );

	void	print_hello(void);
	std::string name_zombie(void);

private:
	void	prefix( void ) const;
	std::string name;
};

Zombie* newZombie( std::string name );
void	randomChump( std::string name );

#endif
