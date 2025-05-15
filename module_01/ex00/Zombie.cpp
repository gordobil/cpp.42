#include "Zombie.hpp"

Zombie::Zombie(){}
Zombie::~Zombie(){
	std::cout << name << RED " died" WHITE "." << std::endl;
}

void	Zombie::announce(void){
	std::cout << name << ":" CYAN " BraiiiiiiinnnzzzZ..." WHITE << std::endl;
}

void	Zombie::rename(std::string new_name){
	name = new_name;
}
