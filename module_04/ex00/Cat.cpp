
#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Cat default constructor called." << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat &copy): Animal(copy){
	std::cout << "Cat copy constructor called." << std::endl;
	this->type = copy.type;
}

Cat	&Cat::operator=(const Cat &copy){
	std::cout << "Cat copy assignment operator called." << std::endl;
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

Cat::~Cat(){
	std::cout << "Cat destructor called." << std::endl;
}

//FUNCTIONS

void	Cat::makeSound()const{
	std::cout << "Meow!" << std::endl;
}
