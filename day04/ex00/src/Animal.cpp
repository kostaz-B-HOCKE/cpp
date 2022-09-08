#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    // std::cout << "Default constructor called (Animal)" << std::endl;
}

Animal::Animal(const Animal & input)
{
    *this = input;
    // std::cout << "Copy constructor called (Animal)" << std::endl;
}

Animal& Animal::operator=(Animal const & rightSide)
{
    // std::cout << "Allignment operator called (Animal)" << std::endl;
    if (this == &rightSide)
        return *this;
    this->type = rightSide.type;
    return *this;
}

Animal::~Animal() {
    // std::cout << "Destructor called (Animal)" << std::endl;
}

std::string	Animal::getType() const {
	return type;
}

void	Animal::makeSound() const {
	std::cout << "deadline deadline" << std::endl;
}
