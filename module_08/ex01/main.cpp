
#include "Span.hpp"

bool	isdigitstr(char *str){
	for (int i = 0; str[i] != '\0'; i++){
		if (!isdigit(str[i]))
			return (false);
	}
	return (true);
}

int	randomNumbers(int amount){
	Span	c(amount);

	std::srand(time(NULL));
	try {
		std::cout << std::endl << RED << " ¬ " << amount << " NUMBERS:" WHITE << std::endl;
		for (int i = 0; i < amount; i++)
			c.addNumber(std::rand() % amount + 1);
		std::cout << CYAN "longestSpan=" WHITE << c.longestSpan() << std::endl;
		std::cout << CYAN "shortestSpan=" WHITE << c.shortestSpan() << std::endl << std::endl;
	}
	catch (const std::exception &e){
		std::cerr << e.what() <<std::endl << std::endl;
	}

	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2 && isdigitstr(argv[1]))
		return (randomNumbers(atoi(argv[1])));

	Span	c(10);

	try {
		std::cout << std::endl << RED " ¬ EMPTY:" WHITE << std::endl;
		c.longestSpan();
	}
	catch (const std::exception &e){
        std::cerr << e.what() << std::endl << std::endl;
	}

	try {
		std::cout << RED " ¬ 10 NUMBERS:" WHITE << std::endl;
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

		std::cout << CYAN "longestSpan=" WHITE << c.longestSpan() << std::endl;
		std::cout << CYAN "shortestSpan=" WHITE << c.shortestSpan() << std::endl;

		c.addNumber(0);
	}
	catch (const std::exception &e){
        std::cerr << e.what() << std::endl << std::endl;
	}

	return (0);
}
