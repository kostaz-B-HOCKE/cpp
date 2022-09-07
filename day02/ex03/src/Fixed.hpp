#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath> 

class Fixed
{

public:

    Fixed(void);
    Fixed(const int num);
    Fixed(const float num);
    Fixed(const Fixed& copyFrom);
    virtual ~Fixed(void);
    Fixed&  operator=(Fixed const &ref);

	bool	operator>(Fixed const & rightSide) const;
	bool	operator<(Fixed const & rightSide) const;
	bool	operator>=(Fixed const & rightSide) const;
	bool	operator<=(Fixed const & rightSide) const;
	bool	operator==(Fixed const & rightSide) const;
	bool	operator!=(Fixed const & rightSide) const;    

    int getRawBits(void) const;
    void setRawBits(int const rawB); 

    int     toInt(void) const;
    float   toFloat(void) const;

    Fixed   operator*(Fixed const & rightSide) const;
    Fixed   operator/(Fixed const & rightSide) const;
    Fixed   operator+(Fixed const & rightSide) const;
    Fixed   operator-(Fixed const & rightSide) const;

    Fixed&  operator++(void);
    Fixed   operator++(int);
    Fixed&  operator--(void);
    Fixed   operator--(int);

    static Fixed& 			min(Fixed& a, Fixed& b);
	static Fixed& 			max(Fixed& a, Fixed& b);
    static  Fixed const &   max(Fixed const & a, Fixed const & b);
    static  Fixed const &	min(Fixed const & a, Fixed const & b);

private:

    int                 rawBits;
    static const int    fractionalBits = 8;
};

std::ostream& operator<<(std::ostream & out, Fixed const & rawB);

#endif
