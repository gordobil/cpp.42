
#include "Date.hpp"

Date::Date(std::string newDate){
	year = atoi(newDate.substr(0, newDate.find('-')));
	month = atoi(newDate.substr(newDate.find('-'), newDate.find_last_of('-')));
	day = atoi(newDate.substr(newDate.find_last_of('-'), newDate.strlen()));
}

std::ostream	&operator<<(std::ostream &out, const Date &date){
	if (date.year < 1000)
		out << 0;
	if (date.year < 100)
		out << 0;
	if (date.year < 10)
		out << 0;
	out << date.year << "-";

	if (date.month < 10)
		out << 0;
	out << date.month << "-";

	if (date.day < 10)
		out << 0;
	out << date.day;

	return (out);
}
