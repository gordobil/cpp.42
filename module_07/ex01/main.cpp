
#include "iter.hpp"

int	main(void)
{
	int			n[] = {1, 2, 3, 4, 5};
	std::string	s[]	= {"one", "two", "three", "four", "five"};
	char		c[] = {'a', 'b', 'c', 'd', 'e'};

	::iter(n, 5, print_values);
	std::cout << std::endl;
	::iter(s, 5, print_values);
	std::cout << std::endl;
	::iter(c, 5, print_values);
}
