
#include "Bureaucrat.hpp"
#include "AForm.hpp"

int	main(void)
{
	Bureaucrat	a("A", 15);
	Bureaucrat	b("B", 5);
	AForm		form("1", 10, 7);

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << form << std::endl << std::endl;

	a.signForm(form);
	b.signForm(form);

	std::cout << std::endl;
	a.incrementGrade(6);
	a.signForm(form);

	return (0);
}
