#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Default constructor called (Cat)" << std::endl;
}

Cat::Cat(const Cat & input) : Animal(input)
{
    *this = input;
    // std::cout << "Copy constructor ClapTrap called" << std::endl;
}

Cat& Cat::operator=(Cat const & rightSide)
{
    // std::cout << "Allignment operator called" << std::endl;
    if (this == &rightSide)
        return *this;
    this->type = rightSide.type;
    return *this;
}

Cat::~Cat() {}

void Cat::makeSound()
{
    std::cout << "meow meow meow" << std::endl;
}
