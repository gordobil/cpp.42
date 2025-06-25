
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal default constructor called." << std::endl;
	type = "WrongDefault";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy){
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	if (this != &copy)
		type = copy.type;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &copy){
	std::cout << "WrongAnimal copy assignment operator called." << std::endl;
	if (this != &copy){
		this->type = copy.getType();
	}
	return (*this);
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor called." << std::endl;
}

//FUNCTIONS

std::string	WrongAnimal::getType()const{
	return (type);
}

void		WrongAnimal::makeSound()const{
	std::cout << ".sdnuos ekam slaminA" << std::endl;
}
