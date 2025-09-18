
#include "C.hpp"

C::C(){}

C::C(const C &copy){
	*this = copy;
}

C	&C::operator=(const C &copy){
	*this = copy;
	return (*this);
}

C::~C(){}
