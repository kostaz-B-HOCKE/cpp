#ifndef WRONGWDOG_HPP
#define WRONGWDOG_HPP

#include "WrongAnimal.hpp"

class   WrongDog : public    WrongAnimal
{

public:

    WrongDog();
    WrongDog(WrongDog const & input);
    WrongDog& operator=(WrongDog const & rightSide);
    ~WrongDog();

    void    makeSound() const;
};

#endif
