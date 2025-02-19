#include "Dog.hpp"

Dog::Dog(): Animal() {
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog &to_copy): Animal(to_copy) {
	std::cout << "Dog copy constructor called" << std::endl;
	if (this == &to_copy)
		return ;
	type = to_copy.type;
}

Dog	&Dog::operator=(const Dog &to_copy) {
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this == &to_copy)
		return (*this);
	type = to_copy.type;
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "Woof" << std::endl;
}