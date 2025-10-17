
#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <typeinfo>

# define RED	"\033[1;95m"
# define CYAN	"\033[1;31m"
# define WHITE	"\033[0m"

class Base
{
	public:
		virtual ~Base();
};

// FUNCTIONS
Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif
