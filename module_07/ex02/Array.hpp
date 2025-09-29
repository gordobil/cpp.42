
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

class Array
{
	private:
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &copy);
		Array	&operator=(Array const &copy);
		~Array();
};

#endif
