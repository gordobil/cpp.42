
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	private:

	public:
		Animal();
		Animal(const Animal &copy);
		Animal			&operator=(const Animal &copy);
		virtual ~Animal();
	
		//FUNCTIONS
		std::string		getType()const;
		virtual void	makeSound()const;
	
	protected:
		std::string		type;
};

#endif
