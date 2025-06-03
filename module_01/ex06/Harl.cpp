#include "Harl.hpp"

Harl::Harl(){};
Harl::~Harl(){};

void	Harl::debug(void){
	std::cout << RED "DEBUG" WHITE << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void){
	std::cout << RED "INFO" WHITE << std:: endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	this->debug();
}

void	Harl::warning(void){
	std::cout << RED "WARNING" WHITE << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
	this->info();
}

void	Harl::error(void){
	std::cout << RED "ERROR" WHITE << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	this->warning();
}

void	Harl::complain(std::string level)
{
	std::string	types[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i = 0;

	while (i < 4 && types[i] != level)
		i++;

	switch (i){
		case 0:
			this->debug();
			break ;
		case 1:
			this->info();
			break ;
		case 2:
			this->warning();
			break ;
		case 3:
			this->error();
			break ;
		default:
			std::cout << RED "INVALID COMMENT TYPE" WHITE << std::endl;
			break ;
	}
}
