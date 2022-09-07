#include "PhoneBook.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

PhoneBook::PhoneBook() : index(0), size(0) {};
PhoneBook::~PhoneBook() {} ;

void PhoneBook::addContact() {
	std::string str;
	
	do {
		std::cout << "Enter the first name: ";
		std::getline(std::cin, str);
	} while (str.length() == 0 || isspace(str[0]));
	this->list[this->index].setFirstName(str);

	do {
		std::cout << "Enter the last name: ";
		std::getline(std::cin, str);
	} while (str.length() == 0);
	this->list[this->index].setLastName(str);
	
	do {
		std::cout << "Enter the nickname: ";
		std::getline(std::cin, str);
	} while (str.length() == 0);
	this->list[this->index].setNickname(str);

	do {
		std::cout << "Enter the phone number: ";
		std::getline(std::cin, str);
	} while (str.length() == 0);
	this->list[this->index].setPhoneNumber(str);

	do {
		std::cout << "Enter the darkest secret: ";
		std::getline(std::cin, str);
	} while (str.length() == 0);
	this->list[this->index].setDarkestSecret(str);

	if (this->index < 7)
		(this->index)++;
	else
		this->index = 0;
	if (this->size < 8)
		(this->size)++;
}

static std::string trim(std::string str) {

	std::string res;
	if (str.length() > 10) {
		res = str.substr(0, 9);
		res.append(".");	
	}
	else
		res = str;
	return res;
}

void PhoneBook::startSearch() {
	
	if (!this->size) {
		std::cout << "No contacts. Add a new one." << std::endl;
		return;
	}

	std::cout << std::setw(10) << "Index" << '|';
	std::cout << std::setw(10) << "First Name" << '|';
	std::cout << std::setw(10) << "Last Name" << '|';
	std::cout << std::setw(10) << "Nickname" << std::endl;
	
	for (int i = 0; i < this->size; i++) {
		std::cout << std::setw(10) << i + 1 << '|';
		std::cout << std::setw(10) << trim(this->list[i].getFirstName()) << '|';
		std::cout << std::setw(10) << trim(this->list[i].getLastName()) << '|';
		std::cout << std::setw(10) << trim(this->list[i].getNickname()) << std::endl;
	}
	
	int int_index;
	do {
		std::string index;
		std::cout << "Enter the index of contact (1 - " << this->size << "): ";
		std::getline(std::cin, index);
		int_index = std::atoi(index.c_str());
	} while (int_index <= 0 || int_index > this->size);

	std::cout << "First name:\t" << this->list[int_index - 1].getFirstName() << std::endl;
	std::cout << "Last name:\t" << this->list[int_index - 1].getLastName() << std::endl;
	std::cout << "Nickname:\t" << this->list[int_index - 1].getNickname() << std::endl;
	std::cout << "Phone number:\t" << this->list[int_index - 1].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret:\t" << this->list[int_index - 1].getDarkestSecret() << std::endl;
}
