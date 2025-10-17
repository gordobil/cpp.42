
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string newData){
	std::ifstream	file(newData.c_str());
	if (!file.is_open())
		throw	std::runtime_error("Error: error opening exchange rates file.");
	
	std::string	line;
	std::getline(file, line);
	while (std::getline(file, line)){
		Date	date(line.substr(0, line.find(',')));
		float	ex_rate = atof(line.substr(line.find(',') + 1, line.length()).c_str());
		data.insert(std::make_pair(date, ex_rate));
	}

	file.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy){
	data = copy.getData();
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &copy){
	data = copy.getData();
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

// FUNCTIONS
std::map<Date, float>	BitcoinExchange::getData(void)const{
	return (data);
}

bool	BitcoinExchange::checkValue(float value){
	if (value < 0){
		std::cerr << CYAN "Error: not a positive number." WHITE << std::endl;
		return (false);
	}
	else if (value > 1000){
		std::cerr << CYAN "Error: too large a number." WHITE << std::endl;
		return (false);
	}

	return (true);
}

bool	BitcoinExchange::checkDate(std::string date){
	int	maxDays[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int	y = atoi(date.substr(0, date.find('-')).c_str());
	int	m = atoi(date.substr(date.find('-') + 1, date.find_last_of('-')).c_str());
	int	d = atoi(date.substr(date.find_last_of('-') + 1, date.length()).c_str());

	if (y < 0 || y > 2025)
		return (false);
	if (m < 1 || m > 12)
		return (false);
	if (d < 1 || d > maxDays[m])
		return (false);
	if (m == 2 && d == 28 && (y % 4 != 0 || (y % 100 == 0 && y % 400 != 0)))
		return (false);

	return (true);
}

bool	BitcoinExchange::checkLine(std::string line){
	bool		ok = true;

	if (!checkDate(line.substr(0, line.find(' ')))){
		std::cerr << CYAN "Error: invalid date => " WHITE << line.substr(0, line.find(' ')) << std::endl;
		ok = false;
	}
	else if (!checkValue(atof(line.substr(line.find_last_of(' ') + 1, line.length()).c_str()))){
		ok = false;
	}
	else if (line.find('|') == std::string::npos){
		std::cerr << CYAN "Error: invalid format." WHITE << std::endl;
		ok = false;	
	}

	return (ok);
}

void	BitcoinExchange::exchange(std::string inputFile){
	std::ifstream	file(inputFile.c_str());
	if (!file.is_open()){
		std::cerr << CYAN "Error: error opening input file." WHITE << std::endl;
		return ;
	}

	std::string	line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		if (checkLine(line)){
			Date	date(line.substr(0, line.find(' ')).c_str());
			float	value = atof(line.substr(line.find_last_of(' ') + 1, line.length()).c_str());
 			if (date < data.begin()->first || date > data.rbegin()->first)
				std::cerr << CYAN "Error: date out of bounds." WHITE << std::endl;
			else{
				std::map<Date, float>::iterator	i = data.lower_bound(date);
				if ((i->first != date || i == data.end()) && i != data.begin())
					i--;
				std::cout << date << " => " << value << " = " << value * i->second << std::endl;
			}
		}
	}
	file.close();
}
