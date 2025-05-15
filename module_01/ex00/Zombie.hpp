#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

# define RED	"\033[1;95m"
# define CYAN	"\033[1;31m"
# define WHITE	"\033[0m"

class Zombie
{	
	private:
		std::string	name;
	
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	rename(std::string new_name);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif