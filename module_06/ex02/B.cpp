
#include "B.hpp"

B::B(){}

B::B(const B &copy){
	*this = copy;
}

B	&B::operator=(const B &copy){
	*this = copy;
	return (*this);
}

B::~B(){}
