
#include "Weapon.hpp"

class   HumanB
{

public:

    HumanB( std::string name );
    virtual ~HumanB(void);
    
    void attack (void);
    Weapon& getWeapon(void) const;
    bool    setWeapon(Weapon& newWeapon);

private:
    std::string name;
    Weapon      *weapon;
};
