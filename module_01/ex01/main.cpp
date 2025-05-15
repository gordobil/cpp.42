#include "Zombie.hpp"

int	main(void)
{
	Zombie	*Horde = zombieHorde(5, "Joxe");

	delete Horde;

	return (0);
}