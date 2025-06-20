#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(std::string newName);
		FragTrap(const FragTrap &copy);
		FragTrap	&operator=(const FragTrap &copy);
		~FragTrap();

		//ACTIONS
		void		highFivesGuys(void);
};

#endif