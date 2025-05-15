#include "Zombie.hpp"

Zombie::Zombie(){}
Zombie::~Zombie(){
	std::cout << name << RED " died" WHITE "." << std::endl;
}

void	Zombie::announce(){
	std::cout << name << CYAN " in horde" WHITE "." << std::endl;
}

void	Zombie::rename(std::string new_name){
	name = new_name;
}
