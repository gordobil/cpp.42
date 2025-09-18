
#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(const Intern &copy){
	(void)copy;
}

Intern	&Intern::operator=(const Intern &copy){
	(void)copy;
	return (*this);
}

Intern::~Intern(){}

// MAKE FORM
AForm	*Intern::makeForm(std::string form, std::string target){
 	std::string	formList[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int 		i = 0;

	while (i < 3 && formList[i] != form)
		i++;
	
	switch (i){
		case 0:
		{
			AForm	*shrubbery = new ShrubberyCreationForm(target);
			std::cout << "Intern creates " << form << " form." << std::endl;
			return (shrubbery);
		}
		case 1:
		{
			AForm	*robotomy = new RobotomyRequestForm(target);
			std::cout << "Intern creates " << form << " form." << std::endl;
			return (robotomy);
		}
		case 2:
		{
			AForm	*pardon = new PresidentialPardonForm(target);
			std::cout << "Intern creates " << form << " form." << std::endl;
			return (pardon);
		}
		default:
			std::cout << "Form '" << form << "' doesn't exist." << std::endl;
	}

	return (NULL);
}
