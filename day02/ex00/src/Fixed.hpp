#include <iostream>
#include <string>

class Fixed
{

public:

    Fixed(void);
    Fixed(int i);
    Fixed(const Fixed& copyFrom);
    Fixed&  operator=(Fixed const & rightSide);
    int getRawBits(void) const;
    void    setRawBits(int const raw);

     virtual ~Fixed(void);

private:

    int                 rawBits;
    static const int    fractionalBits = 8;

};
