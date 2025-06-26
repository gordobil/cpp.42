
#ifndef AAnimal_HPP
#define AANIMAL_HPP

#include <string>
#include <iostream>

class AAnimal
{
	private:

	public:
		AAnimal();
		AAnimal(const AAnimal &copy);
		AAnimal			&operator=(const AAnimal &copy);
		virtual ~AAnimal();
	
		//FUNCTIONS
		std::string		getType()const;
		virtual void	makeSound()const = 0;
	
	protected:
		std::string		type;
};

#endif
