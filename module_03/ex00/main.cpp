#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	paco("Paco");
	std::string juan = "Juan";

	paco.attack(juan);
    paco.takeDamage(8);
    paco.beRepaired(16);
    for (int i = 0; i < 9; i++){
    	paco.attack(juan);}
	paco.beRepaired(6);
    paco.attack(juan);
    paco.takeDamage(1);
	paco.attack(juan);
    paco.takeDamage(100);
    paco.beRepaired(8);
	paco.attack(juan);

	return (0);
}