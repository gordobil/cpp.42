
#include "PmergeMe.hpp"

int	main(int argc, char **argv)
{
	if (argc < 2){
		std::cerr << "Error: invalid number of arguments." << std::endl;
		return (1);
	}

	try{
		PmergeMe	reorder(++argv);}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;}

	return (0);
}
