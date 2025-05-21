#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

#define RED		"\033[1;95m"
#define CYAN	"\033[1;31m"
#define WHITE	"\033[0m"

class Weapon
{
	private:
		std::string	type;
	
	public:
		Weapon(std::string wType);
		~Weapon();
		std::string			getType();
		void				setType(std::string nType);
};

#endif
