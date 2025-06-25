#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(const Brain &copy){
	std::cout << "Brain copy constructor called." << std::endl;
	if (this != &copy)
		*this = copy;
}

Brain	&Brain::operator=(const Brain &copy){
	std::cout << "Brain copy assignment operator called." << std::endl;
	if (this != &copy){
		for (int i = 0; i < 100; i++)
			ideas[i] = copy.ideas[i];
	}
	return (*this);
}

Brain::~Brain(){
	std::cout << "Brain destructor called." << std::endl;
}
