#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Default constructor called (Dog)" << std::endl;
}

Dog::Dog(Dog const & input) : Animal(input)
{
    *this = input;
    // std::cout << "Copy constructor ClapTrap called" << std::endl;
}

Dog& Dog::operator=(Dog const & rightSide)
{
    // std::cout << "Allignment operator called" << std::endl;
    if (this == &rightSide)
        return *this;
    this->type = rightSide.type;
    return *this;
}

Dog::~Dog() {
    // std::cout << "Destructor called (Dog)" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << " woof woof" << std::endl;
}
