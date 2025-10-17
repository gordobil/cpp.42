
#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (std::cerr << "Error: error opening input file." << std::endl, 1);
	
	BitcoinExchange	bitcoins("data.csv");
	for (int i = 1; i < argc; i++){
		std::cout << RED " ¬ File: " WHITE << argv[i] << std::endl;
		bitcoins.exchange(argv[i]);
		if (i != argc - 1)
			std::cout << std::endl;
	}

	return (0);
}
