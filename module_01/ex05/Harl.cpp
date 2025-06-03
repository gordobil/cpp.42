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
}

void	Harl::warning(void){
	std::cout << RED "WARNING" WHITE << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void){
	std::cout << RED "ERROR" WHITE << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level){
	void		(Harl::*functions[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	types[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == types[i])
		{
			(this->*functions[i])();
			return ;
		}
	}
	std::cout << RED "INVALID COMMENT TYPE" WHITE << std::endl;
}