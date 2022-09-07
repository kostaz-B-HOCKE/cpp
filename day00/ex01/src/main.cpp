#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook Book;
	std::string input;

	std::cout << "Enter the command (ADD, SEARCH, EXIT): " << std::endl;
	std::getline(std::cin, input);
	while (input != "EXIT")
	{
		if (input == "ADD" || input == "add")
		{
			Book.addContact();
		}
		if (input == "SEARCH" || input == "search")
		{
			Book.startSearch();
			
		}
		std::getline(std::cin, input);
	}
	std::cout << "Bye" << std::endl;
}
