#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	paco("Paco");
	std::string juan = "Juan";

	paco.attack(juan);
	paco.beRepaired(10);
	paco.takeDamage(18);
	paco.attack(juan);
	paco.highFivesGuys();
	paco.takeDamage(500);
	paco.highFivesGuys();
	paco.attack(juan);

	return (0);
}