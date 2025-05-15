#include <string>

Zombie::Zombie(){}
Zombie::~Zombie(){}

void	Zombie::announce(void){
	std::cout << CYAN name WHITE << " in horde." << std::endl;
}

void	Zombie::rename(std::string new_name){
	name = new_name;
}
