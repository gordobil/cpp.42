#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	a("A");
	std::string b = "B";

	a.attack(b);
	a.beRepaired(10);
	a.takeDamage(18);
	a.attack(b);
	a.highFivesGuys();
	a.takeDamage(500);
	a.highFivesGuys();
	a.attack(b);

	return (0);
}
