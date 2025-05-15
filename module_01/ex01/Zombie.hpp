#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

# define RED	"\033[1;95m"
# define CYAN	"\033[1;31m"
# define WHITE	"\033[0m"

class Zombie
{
	private:
		Zombie(){};
		~Zombie(){};
		std::string	name;
	
	public:
		void	announce(void);
		void	rename(std::string);
}

Zombie* zombieHorde(int N, std::string name);

#endif
