
#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Cat default constructor called." << std::endl;
	type = "Cat";
	brain = new Brain;
}

Cat::Cat(const Cat &copy): AAnimal(copy){
	std::cout << "Cat copy constructor called." << std::endl;
	if (this != &copy)
		*this = copy;
}

Cat	&Cat::operator=(const Cat &copy){
	std::cout << "Cat copy assignment operator called." << std::endl;
	if (this != &copy)
		type = copy.type;
	return (*this);
}

Cat::~Cat(){
	std::cout << "Cat destructor called." << std::endl;
	delete brain;
}

//FUNCTIONS

void	Cat::makeSound()const{
	std::cout << "Meow!" << std::endl;
}
