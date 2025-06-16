#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num){
	std::cout << "Int constructor called" << std::endl;
	n = roundf(num * (1 << frac));
}

Fixed::Fixed(const float num){
	std::cout << "Float constructor called" << std::endl;
	n = roundf(num * (1 << frac));
}

Fixed::Fixed(const Fixed &copy){
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed	&Fixed::operator=(const Fixed &copy){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->n = copy.getRawBits();
	return (*this);
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat(void)const{
	return (roundf(n) / (1 << frac));
}

int	Fixed::toInt(void)const{
	return (n / (1 << frac));
}

int	Fixed::getRawBits(void)const{
	return (n);
}

void	Fixed::setRawBits(const int raw){
	n = raw;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed){
	out << fixed.toFloat();
	return (out);
}
