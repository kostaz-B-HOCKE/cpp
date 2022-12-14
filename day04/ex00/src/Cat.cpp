#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    // std::cout << "Default constructor called (Cat)" << std::endl;
}

Cat::Cat(Cat const & input) : Animal(input)
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

Cat::~Cat() {
    // std::cout << "Destructor called (Cat)" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "meow meow meow" << std::endl;
}

