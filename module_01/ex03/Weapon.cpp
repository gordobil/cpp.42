#include "Weapon.hpp"

Weapon::Weapon(std::string wType){
	type = wType;
};
Weapon::~Weapon(){};

std::string	Weapon::getType(){
	return (type);
}

void	Weapon::setType(std::string nType){
	type = nType;
}

