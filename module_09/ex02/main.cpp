
#include "PmergeMe.hpp"

void	printInfoMssg(PmergeMe sorted){
	std::cout << std::fixed << std::setprecision(5);

	std::cout << RED "Before:\t" WHITE << sorted.get_vNum() << std::endl;
	std::cout << RED "After:\t" WHITE << sorted.get_vSort() << std::endl;

	std::cout << CYAN "Time to process a range of " WHITE << sorted.get_vNum().size();
	std::cout << CYAN " elements with std::vector : " WHITE << sorted.get_vTime() << " us" << std::endl;

	std::cout << CYAN "Time to process a range of " WHITE << sorted.get_dNum().size();
	std::cout << CYAN " elements with std::deque  : " WHITE << sorted.get_dTime() << " us" << std::endl;
}

int	main(int argc, char **argv)
{
	if (argc < 2){
		std::cerr << RED "Error: " WHITE "Invalid number of arguments." << std::endl;
		return (1);
	}

	try{
		PmergeMe	sorted(++argv);
		printInfoMssg(sorted);
//		std::cout << std::endl << sorted;
	}
	catch (std::exception &e){
		std::cerr << RED "Error: " WHITE << e.what() << std::endl;}

	return (0);
}

// ./PmergeMe `shuf -i 1-10 -n 10 | tr "\n" " "`
