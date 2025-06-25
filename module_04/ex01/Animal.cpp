
#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal default constructor called." << std::endl;
	type = "Default";
}

Animal::Animal(const Animal &copy){
	std::cout << "Animal copy constructor called." << std::endl;
	if (this != &copy)
		type = copy.type;
}

Animal	&Animal::operator=(const Animal &copy){
	std::cout << "Animal copy assignment operator called." << std::endl;
	if (this != &copy){
		this->type = copy.getType();
	}
	return (*this);
}

Animal::~Animal(){
	std::cout << "Animal destructor called." << std::endl;
}

//FUNCTIONS

std::string	Animal::getType()const{
	return (type);
}

void		Animal::makeSound()const{
	std::cout << "Animals make sounds." << std::endl;
}
