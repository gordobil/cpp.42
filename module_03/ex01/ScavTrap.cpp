#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	setName("Default");
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "ScavTrap " << getName() << " default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string newName){
	std::cout << "ScavTrap " << getName() << " name constructor called" << std::endl;
	setName(newName);
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
	std::cout << "ScavTrap " << getName() << " copy constructor called" << std::endl;
	if (this == &copy)
		return ;
	*this = copy;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &copy){
	std::cout << "ScavTrap " << getName() << " copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		setName(copy.getName());
		setHitPoints(copy.getHitPoints());
		setEnergyPoints(copy.getEnergyPoints());
		setAttackDamage(copy.getAttackDamage());
	}
	return (*this);
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << getName() << " destructor called" << std::endl;
}

//ACTIONS

void	ScavTrap::attack(const std::string &target){
	if (getHitPoints() == 0){
		std::cout << "ScavTrap " << getName() << " can't attack ScavTrap " << target << " because ScavTrap " << getName() << "'s dead." << std::endl;
		return ;
	}
	else if (getEnergyPoints() == 0){
		std::cout << "ScavTrap " << getName() << "'s too tired to attack." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << getName() << " attacks ScavTrap " << target << ", causing them " << getAttackDamage() << " damage points." << std::endl;
	if (getEnergyPoints() > 1){
		setEnergyPoints(getEnergyPoints() - 1);
		std::cout << "ScavTrap " << getName() << " now has " << getEnergyPoints() << " energy points." << std::endl;
	}
	else{
		setEnergyPoints(0);
		std::cout << "ScavTrap " << getName() << " has no energy left." << std::endl;
	}
}

void	ScavTrap::guardGate(){
	if (getHitPoints() == 0){
		std::cout << "ScavTrap " << getName() << " can't guard the gate because it's dead." << std::endl;
		return ;
	}
	else if (getEnergyPoints() == 0){
		std::cout << "ScavTrap " << getName() << " it's too tired to guard the gate." << std::endl;
		return ;
	}
	else
		std::cout << "ScavTrap " << getName() << " is now guarding the gate." << std::endl;
}
