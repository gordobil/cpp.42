
#ifndef DATE_HPP
#define DATE_HPP

#include <iostream>
#include <stdlib.h>

class Date
{
	public:
		Date(std::string newDate);

		//ATTRIBUTES
		size_t	year;
		size_t	month;
		size_t	day;

		//COMPARE
		bool	operator>(const Date &compare)const;
		bool	operator<(const Date &compare)const;
		bool	operator>=(const Date &compare)const;
		bool	operator<=(const Date &compare)const;
		bool	operator==(const Date &compare)const;
		bool	operator!=(const Date &compare)const;
};

std::ostream	&operator<<(std::ostream &out, const Date &date);

#endif
