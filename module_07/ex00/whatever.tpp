
#include <iostream>

# define RED	"\033[1;95m"
# define CYAN	"\033[1;31m"
# define WHITE	"\033[0m"

template <typename T>
void	swap(T &p1, T &p2){
	T	temp;

	temp = p1;
	p1 = p2;
	p2 = temp;
}

template <typename T>
T	&min(T &p1, T &p2){
	if (p1 < p2)
		return (p1);
	else
		return (p2);
}

template <typename T>
T	&max(T &p1, T &p2){
	if (p1 > p2)
		return (p1);
	else
		return (p2);
}
