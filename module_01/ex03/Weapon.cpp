#include "Weapon.hpp"

Weapon::Weapon(std::string wType){
	setType(wType);
}
Weapon::~Weapon(){}

void	Weapon::setType(std::string nType){
	type = nType;
}

const std::string	&Weapon::getType(void){
	return(type);
}
