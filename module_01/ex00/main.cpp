#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie1 = newZombie("Koldo");

	zombie1->announce();
	randomChump("Patxi");
	delete(zombie1);

	return (0);
}
