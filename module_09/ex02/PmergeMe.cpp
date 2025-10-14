
#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe &copy){
	*this = copy;
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &copy){
	*this = copy;
	return (*this);
}

PmergeMe::~PmergeMe(){}
