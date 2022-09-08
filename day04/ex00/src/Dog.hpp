#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class   Dog : public    Animal
{

public:

    Dog();
    Dog(const Dog & input);
    Dog& operator=(Dog const & rightSide);
    ~Dog();

    void    makeSound() const;

};

#endif
