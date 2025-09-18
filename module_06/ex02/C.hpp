
#ifndef C_HPP
#define C_HPP

#include <string>

class C
{
	private:

	public:
		C();
		C(const C &copy);
		C	&operator=(const C &copy);
		~C();
};

#endif
