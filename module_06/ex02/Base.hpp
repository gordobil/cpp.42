
#ifndef BASE_HPP
#define BASE_HPP

#include <string>

class Base
{
	private:

	public:
		Base();
		Base(const Base &copy);
		Base	&operator=(const Base &copy);
		~Base();
};

#endif
