
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default") {}

Bureaucrat::Bureaucrat(const Bureaucrat &copy){
	if (this != &copy)
	*this = copy;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy){
	if (this != &copy)
		this->grade = copy.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat(){}

//UTILS

std::string	Bureaucrat::getName(void)const{
	return (name);
}

unsigned int	Bureaucrat::getGrade(void)const{
	return (grade);
}

//CHANGE GRADES

void			Bureaucrat::incrementGrade(unsigned int value){
	if (value >= grade)
		gradeTooHighExeption();
	else
		grade -=value;
}

void			Bureaucrat::decrementGrade(unsigned int value){
	if (value <= grade)
		gradeTooLowExeption();
	else
		grade +=value;
}

//EXCEPTIONS

void	Bureaucrat::gradeTooHighExeption(){
	std::cout << "Grade too high." << std::endl;
}

void	Bureaucrat::gradeTooLowExeption(){
	std::cout << "Grade too low." << std::endl;
}
