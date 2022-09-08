#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    // std::cout << "Default constructor called (Animal)" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & input)
{
    *this = input;
    // std::cout << "Copy constructor called (Animal)" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const & rightSide)
{
    // std::cout << "Allignment operator called (Animal)" << std::endl;
    if (this == &rightSide)
        return *this;
    this->type = rightSide.type;
    return *this;
}

WrongAnimal::~WrongAnimal() {
    // std::cout << "Destructor called (Animal)" << std::endl;
}

std::string	WrongAnimal::getType() const {
	return type;
}

void	WrongAnimal::makeSound() const {
	std::cout << "deadline deadline" << std::endl;
}
