#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap();
		ScavTrap(std::string newName);
		ScavTrap(const ScavTrap &copy);
		ScavTrap	&operator=(const ScavTrap &copy);
		~ScavTrap();

		//ACTIONS
		void		attack(const std::string& target);
		void		guardGate();
};

#endif