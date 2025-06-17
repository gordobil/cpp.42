#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>

class ScavTrap
{
	private:
		std::string		name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;

	public:
		ScavTrap();
		ScavTrap(std::string newName);
		ScavTrap(const ScavTrap &copy);
		ScavTrap	&operator=(const ScavTrap &copy);
		~ScavTrap();

		//GETTERS
		std::string	getName(void)const;
		int			getHitPoints(void)const;
		int			getEnergyPoints(void)const;
		int			getAttackDamage(void)const;

		//ACTIONS
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif