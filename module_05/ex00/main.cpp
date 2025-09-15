
#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat a("A", 10);
	Bureaucrat b;
	Bureaucrat c("C", 1);

	std::cout << a << std::endl << std::endl;

	try
	{
		b = Bureaucrat("B", 1234);
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << b << std::endl << std::endl;

	try
	{
		c = Bureaucrat("D", -5);
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << c << std::endl << std::endl;

	a.decrementGrade(5);
	std::cout << a << std::endl;

	return (0);
}
