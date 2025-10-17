
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>

# define RED	"\033[1;95m"
# define CYAN	"\033[1;31m"
# define WHITE	"\033[0m"

template <typename T>
void	easyfind(T &container, int n){
	if (std::find(container.begin(), container.end(), n) == container.end())
		std::cout << n << " not found." << std::endl;
	else
		std::cout << n << " found."<< std::endl;
}
