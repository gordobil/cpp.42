
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
	private:

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal		&operator=(const WrongAnimal &copy);
		virtual ~WrongAnimal();
	
		//FUNCTIONS
		std::string	getType()const;
		void		makeSound()const;
	
	protected:
		std::string	type;
};

#endif
