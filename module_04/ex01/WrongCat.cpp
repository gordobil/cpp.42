
#include "WrongCat.hpp"

WrongCat::WrongCat(){
	std::cout << "WrongCat default constructor called." << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal(copy){
	std::cout << "WrongCat copy constructor called." << std::endl;
	if (this != &copy)
		*this = copy;
}

WrongCat	&WrongCat::operator=(const WrongCat &copy){
	std::cout << "WrongCat copy assignment operator called." << std::endl;
	if (this != &copy)
		type = copy.type;
	return (*this);
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called." << std::endl;
}

//FUNCTIONS

void	WrongCat::makeSound()const{
	std::cout << "!woeM" << std::endl;
}
