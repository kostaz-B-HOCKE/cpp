#include <iostream>
#include <string>
#include <fstream>
#include <sstream>


class Harl
{

public:

    Harl(void);
    virtual ~Harl(void);

    void complain( std::string level );

private:

    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    void empty(void);
};

