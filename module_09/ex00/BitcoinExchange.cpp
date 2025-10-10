
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
	BitcoinExchange::BitcoinExchange("data.csv");
}

BitcoinExchange::BitcoinExchange(std::string newData){
	std::ifstream	file(newData);
	if (!file.is_open())
		throw	std::runtime_error("Error: error opening exchange rates file.")
	
	std::string	line;
	std::getline(file, line);
	while (std::getline(file, line)){
		Date	date(line.substr(0, line.find(',')));
		float	ex_rate = atof(line.substr(line.find(','), line.strlen()));
		date.insert(date, ex_rate);
	}

	file.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy){
	data = copy.getData();
}

BitcoinExchange	&operator=(const BitcoinExchange &copy){
	data = copy.getData();
	return (this);
}

BitcoinExchange::~BitcoinExchange() {}

// FUNCTIONS
std::map<Date, float>	BitcoinExchange::getData(void)const{
	return (data);
}

bool	BitcoinExchange::compareDates(Date &date, Date &compare){
	if (date.year < compare.year)
		return (false);
	if (date.year >= compare.year && date.month < compare.month)
		return (false);
	if (date.year >= compare.year && date.month >= compare.month && date.day < compare.day)
		return (false);

	return (true);
}

bool	BitcoinExchange::checkValue(float value){
	if (value < 0 || value > 1000)
		return (false);
	return (true);
}

bool	BitcoinExchange::checkDate(std::string date){
	int	maxDays[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
	int	year = atoi(date.substr(0, date.find('-')));
	int	month = atoi(date.substr(date.find('-'), date.find_last_of('-')));
	int	day = atoi(date.substr(date.find_last_of('-'), date.strlen()));

	if (year < 0 || year > 2025)
		return (false);
	if (month < 1 || month > 12)
		return (false);
	if (day < 1 || day > maxDays[month])
		return (false);
	if (month == 2 && day == 28 && (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)))
		return (false);

	return (true);
}

bool	BitcoinExchange::checkLine(std::string line){
	bool		errors = false;

	if (!line.find('|')){
		std::cout << "Error: invalid input." << std::endl;
		errors = true;	
	}
	if (checkDate(line.substr(0, line.find(' ')))){
		std::cout << "Error: invalid date." << std:endl;
		errors = true;
	}
	if (checkValue(atof(line.substr(line.find_last_of(' '), line.strlen())))){
		std::cout << "Error: invalid value." << std::endl;
		errors = true;
	}

	return (errors);
}

void	BitcoinExchange::exchange(std::string inputFile){
	if (!data)
		throw	std::runtime_error("Error: uninitialized class, exchange rates missing.");
	std::ifstream	file(inputFile);
	if (!file.is_open())
		throw	std::runtime_error("Error: error opening input file.");

	std::string	line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		if (checkLine(line)){
			Date	date(line.substr(0, line.find(' ')));
			float	value(atof(line.substr(line.find_last_of(' '), line.strlen())));
			if (compareDates(date, data.begin()->first) || compareDates(data.end()->first, date))
				std::cout << "Error: date out of bounds." << std::endl;
			else
				std::cout << date << " => " << value << " = " << value * data.find(date)->second  << std::endl;
		}
	}
	file.close();
}
