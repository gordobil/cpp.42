
#include "Dog.hpp"

Dog::Dog(){
	std::cout << "Dog default constructor called." << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog &copy): Animal(copy){
	std::cout << "Dog copy constructor called." << std::endl;
	this->type = copy.type;
}

Dog	&Dog::operator=(const Dog &copy){
	std::cout << "Dog copy assignment operator called." << std::endl;
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

Dog::~Dog(){
	std::cout << "Dog destructor called." << std::endl;
}

//FUNCTIONS

void	Dog::makeSound()const{
	std::cout << "Woof!" << std::endl;
}
