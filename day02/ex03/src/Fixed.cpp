#include "Fixed.hpp"
#include <string>
#include <iostream>

Fixed::Fixed() : rawBits(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
    // std::cout << "int constructor called" << std::endl;
        rawBits = num << fractionalBits;
}

Fixed::Fixed(const float num) {
	// std::cout << "Float constructor called" << std::endl;
    rawBits = roundf(num * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed& copyFrom)
{
    // std::cout << "copy constructor called" << std::endl;
    *this = copyFrom;
}

Fixed&  Fixed::operator=(Fixed const &ref)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this == &ref)
        return *this;
    rawBits = ref.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
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

bool    Fixed::operator<(Fixed const & rightSide) const
{
    return this->rawBits < rightSide.rawBits;
}

bool    Fixed::operator<=(Fixed const & rightSide) const
{
    return this->rawBits <= rightSide.rawBits;
}

bool	Fixed::operator>(Fixed const & rightSide) const {
	return this->rawBits > rightSide.rawBits;
}

bool    Fixed::operator>=(Fixed const & rightSide) const
{
    return this->rawBits >= rightSide.rawBits;
}

bool    Fixed::operator==(Fixed const & rightSide) const
{
    return this->rawBits == rightSide.rawBits;
}

bool    Fixed::operator!=(Fixed const & rightSide) const
{
    return this->rawBits != rightSide.rawBits;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;

    // std::cout << "operator int " << std::endl;
    rawBits++;
    return (tmp);
}

Fixed&   Fixed::operator++(void)
{
    // std::cout << "operator void " << std::endl;
    rawBits++;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;

    rawBits--;
    return (tmp);
}

Fixed&   Fixed::operator--(void)
{
    rawBits--;
    return (*this);
}


Fixed   Fixed::operator*(Fixed const & rightSide) const
{
    // std::cout << "oper *" << std::endl;
    return Fixed(this->toFloat() * rightSide.toFloat());
}

Fixed   Fixed::operator/(Fixed const & rightSide) const
{
    // std::cout << "oper *" << std::endl;
    return Fixed(this->toFloat() / rightSide.toFloat());
}

Fixed   Fixed::operator+(Fixed const & rightSide) const
{
    // std::cout << "oper *" << std::endl;
    return Fixed(this->toFloat() + rightSide.toFloat());
}

Fixed   Fixed::operator-(Fixed const & rightSide) const
{
    // std::cout << "oper *" << std::endl;
    return Fixed(this->toFloat() - rightSide.toFloat());
}

std::ostream&	operator<<(std::ostream & out, Fixed const & rightSide)
{
	out << rightSide.toFloat();
	return (out);
}

Fixed& 			Fixed::min(Fixed& a, Fixed& b) {
	return a < b ? a : b;
}

Fixed& 			Fixed::max(Fixed& a, Fixed& b) {
	return a > b ? a : b;
}

Fixed const &	Fixed::min(Fixed const & a, Fixed const & b) {
    return a > b ? a : b;
}

Fixed const &   Fixed::max(Fixed const & a, Fixed const & b)
{
    return a > b ? a : b;
}
