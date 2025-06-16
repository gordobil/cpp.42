#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					n;
		static const int	frac = 8;

	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &copy);
		Fixed	&operator=(const Fixed &copy);
		~Fixed();

		//UTILS
		float	toFloat(void)const;
		int		toInt(void)const;
		int		getRawBits(void)const;
		void	setRawBits(const int num);

		//COMPARISON OPERATORS
		bool	operator>(const Fixed &comp);
		bool	operator<(const Fixed &comp);
		bool	operator>=(const Fixed &comp);
		bool	operator<=(const Fixed &comp);
		bool	operator==(const Fixed &comp);
		bool	operator!=(const Fixed &comp);

		//ARITHMETIC OPERATORS
		Fixed	&operator+(const Fixed &x);
		Fixed	&operator-(const Fixed &x);
		Fixed	&operator*(const Fixed &x);
		Fixed	&operator/(const Fixed &x);
		Fixed	&operator++();
		Fixed	&operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);

		//DIFFERENCE FUNCTIONS
		static Fixed	&min(Fixed &n1, Fixed &n2);
		static Fixed	&min(const Fixed &n1, const Fixed &n2);
		static Fixed	&max(Fixed &n1, Fixed &n2);
		static Fixed	&max(const Fixed &n1, const Fixed &n2);
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);

#endif
