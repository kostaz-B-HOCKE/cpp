#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I ve been coming for years whereas you started working here since last month." << std::endl;    
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::empty(void)
{
	std::cout << "Couldn't find this type of a debugger!" << std::endl;
}

void Harl::complain( std::string level )
{
    void (Harl::*mess[5])( ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::empty};

    int key = 4;
    key = level == "DEBUG" ? 0 :key;
    key = level == "INFO" ? 1 :key;
    key = level == "WARNING" ? 2 :key;
    key = level == "ERROR" ? 3 :key;
    (this->*mess[key])();
}
