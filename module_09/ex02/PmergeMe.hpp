
#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <stdlib.h>
#include <limits>
#include <ctime>
#include <algorithm>
#include <iomanip>

class PmergeMe
{
	private:
		std::vector<int>	vNum;
		std::deque<int>		dNum;
		std::vector<int>	vSort;
		std::deque<int>		dSort;
		double				vTime;
		double				dTime;

	public:
		PmergeMe(char **args);
		PmergeMe(const PmergeMe &copy);
		PmergeMe &operator=(const PmergeMe &copy);
		~PmergeMe();

		//GETTERS
		std::vector<int>	get_vNum(void)const;
		std::deque<int>		get_dNum(void)const;
		std::vector<int>	get_vSort(void)const;
		std::deque<int>		get_dSort(void)const;
		double				get_vTime(void)const;
		double				get_dTime(void)const;

		//SORT
		void				getNumbers(char **args);
		void				sortNumbers();

		template <typename Container>
		Container			sortFJ(const Container &cont);
};

//UTILS
std::ostream	&operator<<(std::ostream &out, const PmergeMe &pmergeMe);
std::ostream	&operator<<(std::ostream &out, const std::vector<int> &vec);
std::ostream	&operator<<(std::ostream &out, const std::deque<int> &deq);

#endif
