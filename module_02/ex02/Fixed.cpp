#include "Fixed.hpp"

Fixed::Fixed() : n(0) {}

Fixed::Fixed(const Fixed &copy){
	*this = copy;
}

Fixed::Fixed(const int num){
	n = roundf(num * (1 << frac));
}

Fixed::Fixed(const float num){
	n = roundf(num * (1 << frac));
}

Fixed	&Fixed::operator=(const Fixed &copy){
	if (this != &copy)
		this->n = copy.getRawBits();
	return (*this);
}

Fixed::~Fixed(){}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed){
	out << fixed.toFloat();
	return (out);
}

//UTILS

float	Fixed::toFloat(void)const{
	return(roundf(n) / (1 << frac));
}

int	Fixed::toInt(void)const{
	return (n / (1 << frac));
}

int	Fixed::getRawBits(void)const{
	return (n);
}

void	Fixed::setRawBits(const int num){
	n = num;
}

//COMPARISON OPERATORS

bool	Fixed::operator>(const Fixed &comp){
	if (this->getRawBits() > comp.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &comp){
	if (this->getRawBits() < comp.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &comp){
	if (this->getRawBits() >= comp.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &comp){
	if (this->getRawBits() <= comp.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &comp){
	if (this->getRawBits() == comp.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &comp){
	if (this->getRawBits() != comp.getRawBits())
		return (true);
	return (false);
}

//ARITHMETIC OPERATORS

Fixed	&Fixed::operator+(const Fixed &x){
	this->setRawBits(this->getRawBits() + x.getRawBits());
	return(*this);
}

Fixed	&Fixed::operator-(const Fixed &x){
	this->setRawBits(this->getRawBits() - x.getRawBits());
	return (*this);
}

Fixed	&Fixed::operator*(const Fixed &x){
	this->setRawBits(this->getRawBits() * (x.getRawBits() >> frac));
	return (*this);
}

Fixed	&Fixed::operator/(const Fixed &x){
	this->setRawBits(this->getRawBits() / (x.getRawBits() >> frac));
	return (*this);
}

Fixed	&Fixed::operator++(){
	this->setRawBits(n + 1);
	return (*this);
}

Fixed	&Fixed::operator--(){
	this->setRawBits(n - 1);
	return (*this);
}

Fixed	Fixed::operator++(int){
	Fixed	temp(*this);

	this->setRawBits(this->getRawBits() + 1);
	return (temp);
}

Fixed	Fixed::operator--(int){
	Fixed	temp(*this);

	this->setRawBits(this->getRawBits() - 1);
	return (temp);
}

//DIFFERENCE FUNCTIONS

Fixed	&Fixed::min(Fixed &n1, Fixed &n2){
	if (n1 <= n2)
		return (n1);
	return (n2);
}

Fixed	&Fixed::min(const Fixed &n1, const Fixed &n2){
	if (n1.getRawBits() <= n2.getRawBits())
		return ((Fixed &)n1);
	return ((Fixed &)n2);
}

Fixed	&Fixed::max(Fixed &n1, Fixed &n2){
	if (n1 >= n2)
		return (n1);
	return (n2);
}

Fixed	&Fixed::max(const Fixed &n1, const Fixed &n2){
	if (n1.getRawBits() >= n2.getRawBits())
		return ((Fixed &)n1);
	return ((Fixed &)n2);
}
