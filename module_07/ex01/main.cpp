
#include "iter.tpp"

int	main(void)
{
	int			n[] = {1, 2, 3, 4, 5};
	std::string	s[]	= {"one", "two", "three", "four", "five"};
	char		c[] = {'a', 'b', 'c', 'd', 'e'};

	std::cout << RED "INT:" WHITE << std::endl;
	::iter(n, 5, print_values);
	std::cout << std::endl;

	std::cout << RED "STRING:" WHITE << std::endl;
	::iter(s, 5, print_values);
	std::cout << std::endl;

	std::cout << RED "CHAR:" WHITE << std::endl;
	::iter(c, 5, print_values);
}
