#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    // std::cout << "Default constructor called (Cat)" << std::endl;
}

WrongCat::WrongCat(WrongCat const & input) : WrongAnimal(input)
{
    *this = input;
    // std::cout << "Copy constructor ClapTrap called" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const & rightSide)
{
    // std::cout << "Allignment operator called" << std::endl;
    if (this == &rightSide)
        return *this;
    this->type = rightSide.type;
    return *this;
}

WrongCat::~WrongCat() {
    // std::cout << "Destructor called (Cat)" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "meow meow meow" << std::endl;
}
