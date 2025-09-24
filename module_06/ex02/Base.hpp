
#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <typeinfo>

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
