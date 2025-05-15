#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string		name;
		class Weapon	&weapon;
	
	public:
		HumanA(std::string nName, class Weapon &nWeapon);
		~HumanA();
		void	attack();
};

#endif
