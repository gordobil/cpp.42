#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
	private:
		std::string		name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string newName);
		ClapTrap(const ClapTrap &copy);
		ClapTrap		&operator=(const ClapTrap &copy);
		~ClapTrap();

		//GETTERS
		std::string		getName(void)const;
		int				getHitPoints(void)const;
		int				getEnergyPoints(void)const;
		int				getAttackDamage(void)const;

		//SETTERS
		void			setName(std::string newName);
		void			setHitPoints(int amount);
		void			setEnergyPoints(int amount);
		void			setAttackDamage(int amount);

		//ACTIONS
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

#endif