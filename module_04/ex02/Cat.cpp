
#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Cat default constructor called." << std::endl;
	type = "Cat";
	brain = new Brain;
}

Cat::Cat(const Cat &copy): AAnimal(copy){
	std::cout << "Cat copy constructor called." << std::endl;
	this->type = copy.type;
    this->brain = new Brain(*copy.brain);
}

Cat	&Cat::operator=(const Cat &copy){
	std::cout << "Cat copy assignment operator called." << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
		AAnimal::operator=(copy);
		delete this->brain;
		this->brain = new Brain(*copy.brain);
	}
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
