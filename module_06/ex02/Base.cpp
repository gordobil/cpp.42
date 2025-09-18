
#include "Base.hpp"

Base::Base(){}

Base::Base(const Base &copy){
	*this = copy;
}

Base	&Base::operator=(const Base &copy){
	*this = copy;
	return (*this);
}

Base::~Base(){}
