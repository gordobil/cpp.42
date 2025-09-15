#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(0) {}

Bureaucrat::Bureaucrat(std::string newName, int newGrade) : name(newName){
	if (newGrade < 1)
		throw GradeTooHighException();
	else if (newGrade > 150)
		throw GradeTooLowException();
	grade = newGrade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy){
	if (this != &copy)
		this->grade = copy.getGrade();
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy){
	if (this != &copy)
		this->grade = copy.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat(){
}

// UTILS

std::string	Bureaucrat::getName(void)const{
	return (name);
}

unsigned int	Bureaucrat::getGrade(void)const{
	return (grade);
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat){
	if (bureaucrat.getGrade() == 0)
		out << "Uninitialized bureaucrat.";
	else
		out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return (out);
}

// EXECUTION

void	Bureaucrat::incrementGrade(int value){
	if (!value || value < 0)
		value = 0;
	if ((grade - value) < 1)
		throw GradeTooHighException();
	else
	{
		grade -= value;
		std::cout << name << " bureacrat grade increased by " << value << " points (" << grade << ")." << std::endl;
	}
}

void	Bureaucrat::decrementGrade(int value){
	if (!value || value < 0)
		value = 0;
	if ((grade + value) > 150)
		throw GradeTooLowException();
	else
	{
		grade += value;
		std::cout << name << " bureacrat grade decreased by " << value << " points (" << grade << ")." << std::endl;
	}
	}

// EXCEPTIONS

const char	*Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade too high.");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw(){
	return("Grade too low.");
}
