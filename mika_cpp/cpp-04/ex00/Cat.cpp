#include "Cat.hpp"

Cat::Cat(): Animal() {
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat &to_copy): Animal(to_copy) {
	std::cout << "Cat copy constructor called" << std::endl;
	if (this == &to_copy)
		return ;
	type = to_copy.type;
}

Cat	&Cat::operator=(const Cat &to_copy) {
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this == &to_copy)
		return (*this);
	type = to_copy.type;
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Miau" << std::endl;
}