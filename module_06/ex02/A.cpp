
#include "A.hpp"

A::A(){}

A::A(const A &copy){
	*this = copy;
}

A	&A::operator=(const A &copy){
	*this = copy;
	return (*this);
}

A::~A(){}
