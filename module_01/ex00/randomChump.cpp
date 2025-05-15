#include "Zombie.hpp"

void	randomChump(std::string name){
	Zombie newZ;

	newZ.rename(name);
	newZ.announce();
}
