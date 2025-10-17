
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>
#include <ctime>
#include <algorithm>

# define RED	"\033[1;95m"
# define CYAN	"\033[1;31m"
# define WHITE	"\033[0m"

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack &copy);
		MutantStack	&operator=(const MutantStack &copy);
		~MutantStack();
		
		//TYPES
		typedef typename MutantStack<T>::container_type::iterator iterator;
			iterator				begin();
			iterator				end();

		typedef typename MutantStack<T>::container_type::reverse_iterator reverse_iterator;
			reverse_iterator		rbegin();
			reverse_iterator		rend();

		typedef typename MutantStack<T>::container_type::const_iterator const_iterator;
			const_iterator			begin() const;
			const_iterator			end() const;

		typedef typename MutantStack<T>::container_type::const_reverse_iterator const_reverse_iterator;
			const_reverse_iterator	rbegin() const;
			const_reverse_iterator	rend() const;
};

#include "MutantStack.tpp"

#endif
