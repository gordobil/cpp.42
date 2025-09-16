
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Bureaucrat	bob("Bob", 50);
	Intern		someRandomIntern;
	AForm		*rrf;

	rrf = someRandomIntern.makeForm("random form", "Bender");
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	std::cout << *rrf << std::endl;

	bob.signForm(*rrf);
	bob.executeForm(*rrf);

	return (0);
}
