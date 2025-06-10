#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
	private:
		int					n;
		static const int	fract = 8;

	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed	&operator=(const Fixed &copy);
		~Fixed();
		int		getRawBits(void)const;
		void	setRawBits(int const raw);
};

#endif
