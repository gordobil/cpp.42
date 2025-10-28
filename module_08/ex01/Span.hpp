
#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>
#include <ctime>

# define RED	"\033[1;95m"
# define CYAN	"\033[1;31m"
# define WHITE	"\033[0m"

class Span
{
	private:
		unsigned int		max;
		std::vector<int>	container;

	public:
		Span(unsigned int N);
		Span(const Span &copy);
		Span	&operator=(const Span &copy);
		~Span();

		//UTILS
		unsigned int		getMax(void)const;
		std::vector<int>	getContainer(void)const;

		//FUNCTIONS
		void				addNumber(int n);
		int					longestSpan(void)const;
		int					shortestSpan(void)const;
};

#endif
