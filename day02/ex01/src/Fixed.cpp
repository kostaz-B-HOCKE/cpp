#include "Fixed.hpp"
#include <string>
#include <iostream>

Fixed::Fixed() : rawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
    std::cout << "int constructor called" << std::endl;
        rawBits = num << fractionalBits;
}

Fixed::Fixed(const float num) {
	std::cout << "Float constructor called" << std::endl;
    rawBits = roundf(num * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed& copyFrom)
{
    std::cout << "copy constructor called" << std::endl;
    *this = copyFrom;
}

Fixed&  Fixed::operator=(Fixed const &ref)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &ref)
        return *this;
    rawBits = ref.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	return rawBits;
}

void Fixed::setRawBits(int const rawB)
{
    rawBits = rawB;
}

float Fixed::toFloat(void) const
{
    return (float)rawBits / (1 << fractionalBits);
}

int Fixed::toInt(void) const
{
    return rawBits >> fractionalBits;
}

std::ostream& operator<<(std::ostream & out, Fixed const & rawB)
{
    out << rawB.toFloat();
    return (out);
}
