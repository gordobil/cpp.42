
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
	AForm("PresidentialPardonForm", 25, 5, "Default") {}

PresidentialPardonForm::PresidentialPardonForm(std::string newTarget) :
	AForm("PresidentialPardonForm", 25, 5, newTarget) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) :
	AForm("PresidentialPardonForm", 25, 5, copy.getTarget()) {}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &copy){
	(void)copy;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){}

// FUNCTIONS

void	PresidentialPardonForm::beExecuted(void)const{
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebox." << std::endl;
}

std::ostream	&operator<<(std::ostream &out, const PresidentialPardonForm &copy){
	out << "Presidential pardon form target [" << copy.getTarget() << "]";
	return (out);
}
