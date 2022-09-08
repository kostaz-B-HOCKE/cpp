#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class   WrongCat : public WrongAnimal
{

public:

    WrongCat();
    WrongCat(const WrongCat & input);
    WrongCat& operator=(WrongCat const & rightSide);
    ~WrongCat();

    void    makeSound() const;

};

#endif