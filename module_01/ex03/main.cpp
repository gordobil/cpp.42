#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	Weapon weaponA = Weapon("crude spiked club");
	HumanA bob("Bob", weaponA);
		bob.attack();
		weaponA.setType("some other type of club");
		bob.attack();

	Weapon weaponB = Weapon("crude spiked club");
	HumanB jim("Jim");
		jim.setWeapon(&weaponB);
		jim.attack();
		weaponB.setType("some other type of club");
		jim.attack();

	return (0);
}
