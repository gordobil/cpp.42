
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat				a("A", 50);
	ShrubberyCreationForm	form1("firstTarget");
	RobotomyRequestForm		form2("secondTarget");
	PresidentialPardonForm	form3("thirdTarget");

	std::cout << a << std::endl;
	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
	std::cout << form3 << std::endl << std::endl;

	a.signForm(form1);
	a.executeForm(form1);
	std::cout << std::endl;

	a.signForm(form2);
	a.executeForm(form2);
	std::cout << std::endl;

	a.signForm(form3);
	a.executeForm(form3);
	std::cout << std::endl;

	a.incrementGrade(46);
	std::cout << std::endl;

	a.executeForm(form2);
	std::cout << std::endl;

	a.signForm(form3);
	a.executeForm(form3);

	return (0);
}
