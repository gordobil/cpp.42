
#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (std::cerr << CYAN "Error: missing input file." WHITE << std::endl, 1);

	try{
		BitcoinExchange	bitcoins("data.csv");

		for (int i = 1; i < argc; i++){
			std::cout << RED " ¬ Input file: " WHITE << argv[i] << std::endl;
			bitcoins.exchange(argv[i]);
			if (i != argc - 1)
				std::cout << std::endl;
		}
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;}

	return (0);
}
