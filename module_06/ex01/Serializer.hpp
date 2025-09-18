
#ifndef SERILIZER_HPP
#define SERIALIZER_HPP

#include <string>

class Serializer
{
	private:

	public:
		Serializer();
		Serializer(const Serializer &copy);
		Serializer	&operator=(const Serializer &copy);
		~Serializer();
};

#endif
