#include "WrongDog.hpp"

WrongDog::WrongDog()
{
    this->type = "WrongDog";
    // std::cout << "Default constructor called (WrongDog)" << std::endl;
}

WrongDog::WrongDog(WrongDog const & input) : WrongAnimal(input)
{
    *this = input;
    // std::cout << "Copy constructor ClapTrap called" << std::endl;
}

WrongDog& WrongDog::operator=(WrongDog const & rightSide)
{
    // std::cout << "Allignment operator called" << std::endl;
    if (this == &rightSide)
        return *this;
    this->type = rightSide.type;
    return *this;
}

WrongDog::~WrongDog() {
    // std::cout << "Destructor called (WrongDog)" << std::endl;
}

void WrongDog::makeSound() const
{
    std::cout << " woof woof" << std::endl;
}
