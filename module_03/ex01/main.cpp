#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a("A");
	std::string b = "B";

	a.attack(b);
	a.beRepaired(10);
	a.takeDamage(18);
	a.attack(b);
	a.guardGate();
	a.takeDamage(500);
	a.guardGate();
	a.attack(b);

	return (0);
}