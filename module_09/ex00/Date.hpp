
#ifndef DATE_HPP
#define DATE_HPP

#include <iostream>

class Date
{
	public:
		Date(std::string newDate);

		//ATTRIBUTES
		size_t	year;
		size_t	month;
		size_t	day;
};

std::ostream	&operator<<(std::ostream &out, const Date &date);

#endif
