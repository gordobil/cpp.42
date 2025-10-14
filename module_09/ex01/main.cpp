
#include "RPN.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (retError());

	RPN	calculate((std::string(argv[1])));

	return (0);
}
