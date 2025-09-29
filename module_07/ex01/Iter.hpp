
#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	print_values(T const &p){
	std::cout << p << std::endl;
}

template <typename T>
void	iter(T *ptr, unsigned int size, void(*f)(T const &)){
	for (unsigned int i = 0; i < size; i++)
		f(ptr[i]);
}

#endif
