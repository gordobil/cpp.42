
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T = int>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack &copy);
		MutantStack	&operator=(const MutantStack &copy);
		~MutantStack();
		
}

#endif
