
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : 
	AForm("RobotomyRequestForm", 72, 45, "Default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string newTarget) :
	AForm("RobotomyRequestForm", 72, 45, newTarget) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) :
	AForm("RobotomyRequestForm", 72, 45, copy.getTarget()) {}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &copy){
	(void)copy;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){}

// FUNCTIONS

void	RobotomyRequestForm::beExecuted(void)const{
	if (getTarget()[0] % 2 != 0){
		std::cout << "***drilling noises***" << std::endl;
		std::cout << getTarget() << " has been robotomyzed succesfully 50% of the time." << std::endl;
	}
	else
		std::cout << "Robotomy failed." << std::endl;
}

std::ostream	&operator<<(std::ostream &out, const RobotomyRequestForm &copy){
	out << "Robotomy request form target [" << copy.getTarget() << "]";
	return (out);
}
