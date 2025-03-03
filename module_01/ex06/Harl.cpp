/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 11:47:52 by ngordobi          #+#    #+#             */
/*   Updated: 2025/02/28 11:47:52 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}

void	Harl::debug(void)
{
	std::cout << RED "DEBUG" WHITE << std::endl,
	std::cout << "Debug messages contain contextual information. They are mostly used for problem diagnosis." << std::endl << std::endl;
}

void	Harl::info(void)
{
	std::cout << RED "INFO" WHITE << std::endl,
	std::cout << "These messages contain extensive information. They are helpful for tracing program execution in a production environment." << std::endl << std::endl;
}

void	Harl::warning(void)
{
	std::cout << RED "WARNING" WHITE << std::endl,
	std::cout << "Warning messages indicate a potential issue in the system. However, it can be handled or ignored." << std::endl << std::endl;
}

void	Harl::error(void)
{
	std::cout << RED "ERROR" WHITE << std::endl,
	std::cout << "These messages indicate an unrecoverable error has occurred. This is usually a critical issue that requires manual intervention." << std::endl << std::endl;
}

void	Harl::complain(std::string level)
{
	int			i;
	std::string	all_levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (i = 0; i < 4; i++)
		if (level == all_levels[i])
			break ;
	switch (i)
	{
		case (0):
			debug();
		case (1):
			info();
		case (2):
			warning();
		case (3):
			error();
			break ;
		default:
			std::cout << CYAN "NOPE !!" WHITE << std::endl;
	}
}
