
#include "Span.hpp"

void	tenThousandNumbers(){
	int		amount = 10000;
	Span	c(amount);

	std::srand(time(NULL));
	try {
		for (int i = 0; i < amount; i++)
			c.addNumber(std::rand());
		std::cout << "longestSpan=" << c.longestSpan() << std::endl;
		std::cout << "shortestSpan=" << c.shortestSpan() << std::endl;
	}
	catch (const std::exception &e){
		std::cerr << e.what() <<std::endl;
	}
}

int	main(void)
{
	Span	c(10);

	try {
		c.longestSpan();
	}
	catch (const std::exception &e){
        std::cerr << e.what() << std::endl << std::endl;
	}

	try {
		c.addNumber(-10);
		c.addNumber(-1);
		c.addNumber(1);
		c.addNumber(2);
		c.addNumber(6);
		c.addNumber(10);
		c.addNumber(15);
		c.addNumber(21);
		c.addNumber(28);
		c.addNumber(40);

		std::cout << "longestSpan=" << c.longestSpan() << std::endl;
		std::cout << "shortestSpan=" << c.shortestSpan() << std::endl;

		c.addNumber(0);
	}
	catch (const std::exception &e){
        std::cerr << e.what() << std::endl << std::endl;
	}

	tenThousandNumbers();

	return (0);
}
