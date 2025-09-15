
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	a("A", 15);
	Bureaucrat	b("B", 5);
	Form		form("1", 10, 7);

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << form << std::endl << std::endl;

	a.signForm(form);
	b.signForm(form);

	return (0);
}
