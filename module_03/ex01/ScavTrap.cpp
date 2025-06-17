#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : hitPoints(10), energyPoints(10), attackDamage(0){
	std::cout << "Default constructor called" << std::endl;
	name = "Default";
}

ScavTrap::ScavTrap(std::string newName) : hitPoints(10), energyPoints(10), attackDamage(0){
	std::cout << "Name constructor called" << std::endl;
	name = newName;
}

ScavTrap::ScavTrap(const ScavTrap &copy){
	std::cout << "Copy constructor called" << std::endl;
	if (this == &copy)
		return ;
	*this = copy;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &copy){
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

ScavTrap::~ScavTrap(){
	std::cout << "Destructor called" << std::endl;
}

//GETTERS

std::string	ScavTrap::getName(void)const{
	return (name);
}

int	ScavTrap::getHitPoints(void)const{
	return (hitPoints);
}

int	ScavTrap::getEnergyPoints(void)const{
	return (energyPoints);
}

int	ScavTrap::getAttackDamage(void)const{
	return (attackDamage);
}

//ACTIONS

void	ScavTrap::attack(const std::string &target){
	if (hitPoints == 0){
		std::cout << "ScavTrap " << name << " can't attack ScavTrap " << target << " because ScavTrap " << name << "'s dead." << std::endl;
		return ;
	}
	if (energyPoints == 0){
		std::cout << "ScavTrap " << name << "'s too tired to attack." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing them " << attackDamage << " damage points." << std::endl;
	if (energyPoints > 1){
		energyPoints--;
		std::cout << "ScavTrap " << name << " now has " << energyPoints << " energy points." << std::endl;
	}
	else{
		energyPoints = 0;
		std::cout << "ScavTrap " << name << " has no energy left." << std::endl;
	}
}

void	ScavTrap::takeDamage(unsigned int amount){
	if (hitPoints == 0){
		std::cout << "ScavTrap " << name << " can't take damage because they're dead." << std::endl;
		return ;
	}
	if (hitPoints > amount){
		hitPoints -= amount;
		std::cout << "ScavTrap " << name << " took " << amount << " damage points and now has " << hitPoints << " hit points." << std::endl;
	}
	else{
		hitPoints = 0;
		std::cout << "ScavTrap " << name << " took " << amount << " damage points and got killed." << std::endl;
	}
}

void	ScavTrap::beRepaired(unsigned int amount){
	if (hitPoints == 0){
		std::cout << "ScavTrap " << name << " can't repair themself because they're dead." << std::endl;
		return ;
	}
	if (energyPoints == 0){
		std::cout << "ScavTrap " << name << "'s too tired to repair themself." << std::endl;
		return ;
	}
	if ((hitPoints + amount) > 10)
		hitPoints = 10;
	else
		hitPoints += amount;
	std::cout << "ScavTrap " << name << " repaired themself and now have " << hitPoints << " hit points." << std::endl;
}
