#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDamage(0){}

ClapTrap::ClapTrap(std::string newName){
	name = newName;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
	*this = copy;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy){
	if (this != &copy)
	{
		this->name = copy.getName();
		this->hitPoints = copy.getHitPoints();
		this->energyPoints = copy.getEnergyPoints();
		this->attackDamage = copy.getAttackDamage();
	}
	return (*this);
}

ClapTrap::~ClapTrap(){}

//GETTERS

std::string	ClapTrap::getName(void)const{
	return (name);
}

int	ClapTrap::getHitPoints(void)const{
	return (hitPoints);
}

int	ClapTrap::getEnergyPoints(void)const{
	return (energyPoints);
}

int	ClapTrap::getAttackDamage(void)const{
	return (attackDamage);
}

//ACTIONS

void	ClapTrap::attack(const std::string &target){

}

void	ClapTrap::takeDamage(unsigned int amount){

}

void	ClapTrap::beRepaired(unsigned int amount){

}