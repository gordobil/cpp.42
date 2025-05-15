#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string		name;
		class Weapon	*weapon;
	
	public:
		HumanB(std::string nName);
		~HumanB();
		void	attack();
};

#endif
