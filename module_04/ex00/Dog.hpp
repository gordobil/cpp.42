
#ifndef DOG_HPP
#define	DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	private:

	public:
		Dog();
		Dog(const Dog &copy);
		Dog		&operator=(const Dog &copy);
		~Dog();
		
		//FUNCTIONS
		void	makeSound()const;
};

#endif
