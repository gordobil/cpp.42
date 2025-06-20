#include "FragTrap.hpp"

FragTrap::FragTrap(){
	setName("Default");
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap " << getName() << " default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string newName){
	std::cout << "FragTrap " << getName() << " name constructor called" << std::endl;
	setName(newName);
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) {
	std::cout << "FragTrap " << getName() << " copy constructor called" << std::endl;
	if (this == &copy)
		return ;
	*this = copy;
}

FragTrap	&FragTrap::operator=(const FragTrap &copy){
	std::cout << "FragTrap " << getName() << " copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		setName(copy.getName());
		setHitPoints(copy.getHitPoints());
		setEnergyPoints(copy.getEnergyPoints());
		setAttackDamage(copy.getAttackDamage());
	}
	return (*this);
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << getName() << " destructor called" << std::endl;
}

//ACTIONS

void	FragTrap::highFivesGuys(void){
	if (getHitPoints() == 0){
		std::cout << "FragTrap " << getName() << " can't high-five you because it's dead." << std::endl;
		return ;
	}
	else if (getEnergyPoints() == 0){
		std::cout << "FragTrap " << getName() << " it's too tired to high-five you." << std::endl;
		return ;
	}
	else
		std::cout << "FragTrap " << getName() << " high-fives you." << std::endl;
}
