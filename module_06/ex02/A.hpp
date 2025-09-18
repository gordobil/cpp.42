
#ifndef A_HPP
#define A_HPP

#include <string>

class A
{
	private:

	public:
		A();
		A(const A &copy);
		A	&operator=(const A &copy);
		~A();
};

#endif
