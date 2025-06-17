#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDamage(0){
	std::cout << "Default constructor called" << std::endl;
	name = "Default";
}

ClapTrap::ClapTrap(std::string newName) : hitPoints(10), energyPoints(10), attackDamage(0){
	std::cout << "Name constructor called" << std::endl;
	name = newName;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
	std::cout << "Copy constructor called" << std::endl;
	if (this == &copy)
		return ;
	*this = copy;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->name = copy.getName();
		this->hitPoints = copy.getHitPoints();
		this->energyPoints = copy.getEnergyPoints();
		this->attackDamage = copy.getAttackDamage();
	}
	return (*this);
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called" << std::endl;
}

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
	if (hitPoints == 0){
		std::cout << "ClapTrap " << name << " can't attack ClapTrap " << target << " because ClapTrap " << name << "'s dead." << std::endl;
		return ;
	}
	if (energyPoints == 0){
		std::cout << "ClapTrap " << name << "'s too tired to attack." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing them " << attackDamage << " damage points." << std::endl;
	if (energyPoints > 1){
		energyPoints--;
		std::cout << "ClapTrap " << name << " now has " << energyPoints << " energy points." << std::endl;
	}
	else{
		energyPoints = 0;
		std::cout << "ClapTrap " << name << " has no energy left." << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (hitPoints == 0){
		std::cout << "ClapTrap " << name << " can't take damage because they're dead." << std::endl;
		return ;
	}
	if (hitPoints > amount){
		hitPoints -= amount;
		std::cout << "ClapTrap " << name << " took " << amount << " damage points and now has " << hitPoints << " hit points." << std::endl;
	}
	else{
		hitPoints = 0;
		std::cout << "ClapTrap " << name << " took " << amount << " damage points and got killed." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (hitPoints == 0){
		std::cout << "ClapTrap " << name << " can't repair themself because they're dead." << std::endl;
		return ;
	}
	if (energyPoints == 0){
		std::cout << "ClapTrap " << name << "'s too tired to repair themself." << std::endl;
		return ;
	}
	if ((hitPoints + amount) > 10)
		hitPoints = 10;
	else
		hitPoints += amount;
	std::cout << "ClapTrap " << name << " repaired themself and now have " << hitPoints << " hit points." << std::endl;
}
