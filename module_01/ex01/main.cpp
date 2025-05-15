#include "Zombie.hpp"

int	main(void)
{
	std::string	name = "zombie";
	Zombie		*horde = zombieHorde(5, name);

	for (int N = 0; N < 5; N++)
		horde[N].announce();

	delete[] horde;

	return (0);
}