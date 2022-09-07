#include "Weapon.hpp"

class HumanA
{

public:

    HumanA(std::string name, Weapon &weapon);
    virtual ~HumanA(void);

    void    attack(void);
    Weapon& getWeapon(void);

private:
    std::string name;
    Weapon      &weapon;

};
