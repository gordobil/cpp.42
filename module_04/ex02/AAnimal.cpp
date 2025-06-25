
#include "AAnimal.hpp"

Animal::AAnimal(){
	std::cout << "AAnimal default constructor called." << std::endl;
	type = "Default";
}

AAnimal::AAnimal(const AAnimal &copy){
	std::cout << "AAnimal copy constructor called." << std::endl;
	if (this != &copy)
		type = copy.type;
}

AAnimal	&AAnimal::operator=(const AAnimal &copy){
	std::cout << "AAnimal copy assignment operator called." << std::endl;
	if (this != &copy){
		this->type = copy.getType();
	}
	return (*this);
}

AAnimal::~AAnimal(){
	std::cout << "AAnimal destructor called." << std::endl;
}

//FUNCTIONS

std::string	AAnimal::getType()const{
	return (type);
}

void		AAnimal::makeSound()const{
	std::cout << "AAnimals make sounds." << std::endl;
}
