
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdlib.h>

# define RED	"\033[1;95m"
# define CYAN	"\033[1;31m"
# define WHITE	"\033[0m"

template <typename T>
class Array
{
	private:
	T				*array;
	unsigned int	arraySize;
	
	public:
	Array();
	Array(unsigned int len);
	Array(Array const &copy);
	Array			&operator=(const Array &copy);
	T				&operator[](unsigned int i);
	T				&operator*(void)const;
	~Array();
	
	//FUNCTIONS
	unsigned int	size(void)const;
};

#include "Array.tpp"

#endif
