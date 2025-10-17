
#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

# define RED	"\033[1;95m"
# define CYAN	"\033[1;31m"
# define WHITE	"\033[0m"

struct Data
{
	unsigned int	index;
	std::string		name;
};

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &copy);
		Serializer	&operator=(const Serializer &copy);
		~Serializer();
	
	public:
		static uintptr_t	serialize(Data* ptr);
		static Data			*deserialize(uintptr_t raw);
};

#endif
