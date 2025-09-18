
#include "Serializer.hpp"

Serializer::Serializer(){}

Serializer::Serializer(const Serializer &copy){
	*this = copy;
}

Serializer	&Serializer::operator=(const Serializer &copy){
	*this = copy;
	return (*this);
}

Serializer::~Serializer(){}
