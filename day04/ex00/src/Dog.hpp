#ifndef DOG_HPP
#define DOG_HPP

#include "Dog.hpp"

class   Dog
{

public:

    Dog();
    Dog(std::string name);
    Dog(const Dog & input);
    Dog& operator=(Dog const & rightSide);
    ~Dog();

    // makeSound();

protected:
    std::string type;
};

#endif
