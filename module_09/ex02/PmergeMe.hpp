
#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <stdlib.h>
#include <limits>

class PmergeMe
{
	private:
		std::vector<int>	v;
		std::deque<int>		d;

	public:
		PmergeMe(char **args);
		PmergeMe(const PmergeMe &copy);
		PmergeMe &operator=(const PmergeMe &copy);
		~PmergeMe();

		//SORT
		void	getNumbers(char **args);
		void	sortFJ();
};

#endif
