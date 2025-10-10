
#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (std::cout << "Error: could not open file." << std::cout, 1);
	
	BitcoinExchange	bitcoins;
	bitcoins.exchange(argv[1]);

	return (0);
}
