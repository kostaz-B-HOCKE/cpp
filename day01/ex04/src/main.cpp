#include "MeReplace.hpp"


int main(int argc, char **argv)
{
	MeReplace Repl;

	if (argc != 4)
	{
		std::cout << "Wrong argument" << std::endl;
		exit(0);
	} 
	Repl.ft_replace(argv[1], argv[2], argv[3]);

	// catch(const char *error)
	// {
	// 	std::cerr << error << std::endl;
	// }
}

