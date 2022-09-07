#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{

public:
    PhoneBook();
    ~PhoneBook();

    void	addContact();
	void	startSearch();

private:
	Contact	list[8];
	int		index;
	int		size;
};

#endif
