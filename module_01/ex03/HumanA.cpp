#include "HumanA.hpp"

HumanA::HumanA(std::string nName, class Weapon &nWeapon): name(nName), weapon(nWeapon){}
HumanA::~HumanA(){}

void	HumanA::attack(){
	std::string	wType = weapon.getType();
	std::cout << CYAN << name << WHITE "attacks with their " CYAN << wType << WHITE << std::endl;
}