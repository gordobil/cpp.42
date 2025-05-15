#include "Zombie.hpp"

Zombie*	newZombie(std::string name){
	Zombie	*newZ = new Zombie;

	newZ->rename(name);
	return (newZ);
}
