
#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &copy):
	std::stack<T>(copy) {}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack<T> &copy){
	this = MutantStack<T>(copy);
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack() {}