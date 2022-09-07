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

    int getRawBits(void) const;
    void setRawBits(int const rawB); 

    int     toInt(void) const;
    float   toFloat(void) const;

private:

    int                 rawBits;
    static const int    fractionalBits = 8;
};

std::ostream& operator<<(std::ostream & out, Fixed const & rawB);

#endif
