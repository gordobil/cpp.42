#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string		name;
		Weapon			*weapon;
	
	public:
		HumanB(std::string nName);
		~HumanB();
		void	setWeapon(Weapon *nWeapon);
		void	attack();
};

#endif
