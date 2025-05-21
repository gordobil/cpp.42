#include "HumanB.hpp"

HumanB::HumanB(std::string nName){
	name = nName;
};
HumanB::~HumanB(){};

void	HumanB::setWeapon(Weapon *nWeapon){
	weapon = nWeapon;
}

void	HumanB::attack(){
	std::string	wType = weapon->getType();
	std::cout << CYAN << name << WHITE " attacks with their " CYAN << wType << WHITE << std::endl;
}

