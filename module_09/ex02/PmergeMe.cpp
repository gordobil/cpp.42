
#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char **args){
	getNumbers(args);
	sortFJ();
}

PmergeMe::PmergeMe(const PmergeMe &copy){
	*this = copy;
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &copy){
	*this = copy;
	return (*this);
}

PmergeMe::~PmergeMe(){}

// SORT
void	PmergeMe::getNumbers(char **args){
	for (int i = 0; args[i] != NULL; i++)
	{
		for (int j = 0; args[i][j] != '\0'; j++){
			if (!isdigit(args[i][j]))
				throw std::runtime_error("Error: invalid argument.");
		}
		if (atol(args[i]) > std::numeric_limits<int>::max())
			throw std::runtime_error("Error: number out of limits");
		v.push_back(atoi(args[i]));
		d.push_back(atoi(args[i]));
	}
}

void	PmergeMe::sortFJ(){
	std::cout << ":)" << std::endl;
}
