#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("A");
	std::string b = "B";

	a.attack(b);
    a.takeDamage(8);
    a.beRepaired(16);
    for (int i = 0; i < 9; i++){
    	a.attack(b);}
	a.beRepaired(6);
    a.attack(b);
    a.takeDamage(1);
	a.attack(b);
    a.takeDamage(100);
    a.beRepaired(8);
	a.attack(b);

	return (0);
}