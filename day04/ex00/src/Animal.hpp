#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include <cmath> 

class   Animal
{

public:

    Animal();
    Animal(const Animal & input);
    Animal& operator=(Animal const & rightSide);
    virtual ~Animal();

    std::string		getType() const;
    virtual void    makeSound() const;

protected:
    std::string type;
};

#endif
