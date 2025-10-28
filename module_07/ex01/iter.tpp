
#include <iostream>

# define RED	"\033[1;95m"
# define CYAN	"\033[1;31m"
# define WHITE	"\033[0m"

template <typename T>
void	print_values(T const &p){
	std::cout << p << std::endl;
}

template <typename T, typename ft>
void	iter(T *ptr, unsigned int size, ft f){
	for (unsigned int i = 0; i < size; i++)
		f(ptr[i]);
}
