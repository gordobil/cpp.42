
#include "Dog.hpp"

Dog::Dog(){
	std::cout << "Dog default constructor called." << std::endl;
	type = "Dog";
	brain = new Brain;
}

Dog::Dog(const Dog &copy): AAnimal(copy){
	std::cout << "Dog copy constructor called." << std::endl;
	this->type = copy.type;
    this->brain = new Brain(*copy.brain);
}

Dog	&Dog::operator=(const Dog &copy){
	std::cout << "Dog copy assignment operator called." << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
		AAnimal::operator=(copy);
		delete this->brain;
		this->brain = new Brain(*copy.brain);
	}
	return (*this);
}

Dog::~Dog(){
	std::cout << "Dog destructor called." << std::endl;
	delete brain;
}

//FUNCTIONS

void	Dog::makeSound()const{
	std::cout << "Woof!" << std::endl;
}
