
#include "Date.hpp"

Date::Date(std::string newDate){
	year = atoi(newDate.substr(0, newDate.find('-')).c_str());
	month = atoi(newDate.substr(newDate.find('-') + 1, newDate.find_last_of('-')).c_str());
	day = atoi(newDate.substr(newDate.find_last_of('-') + 1, newDate.length()).c_str());
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

// COMPARE
bool	Date::operator>(const Date &compare)const{
	if (year > compare.year)
		return (true);
	if (year >= compare.year && month > compare.month)
		return (true);
	if (year >= compare.year && month >= compare.month && day > compare.day)
		return (true);
	return (false);
}

bool	Date::operator<(const Date &compare)const{
	if (year < compare.year)
		return (true);
	if (year <= compare.year && month < compare.month)
		return (true);
	if (year <= compare.year && month <= compare.month && day < compare.day)
		return (true);
	return (false);
}

bool	Date::operator>=(const Date &compare)const{
	if (year > compare.year)
		return (true);
	if (year >= compare.year && month > compare.month)
		return (true);
	if (year >= compare.year && month >= compare.month && day >= compare.day)
		return (true);
	return (false);
}

bool	Date::operator<=(const Date &compare)const{
	if (year < compare.year)
		return (true);
	if (year <= compare.year && month < compare.month)
		return (true);
	if (year <= compare.year && month <= compare.month && day <= compare.day)
		return (true);
	return (false);
}

bool	Date::operator==(const Date &compare)const{
	if (year == compare.year && month == compare.month && day == compare.day)
		return (true);
	return (false);
}

bool	Date::operator!=(const Date &compare)const{
	if (year != compare.year || month != compare.month || day != compare.day)
		return (true);
	return (false);
}
