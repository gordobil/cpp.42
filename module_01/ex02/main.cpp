/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:48:50 by ngordobi          #+#    #+#             */
/*   Updated: 2025/02/24 09:48:50 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

# define CYAN	"\033[1;96m"
# define WHITE	"\033[0m"

int main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "The memory address of the string variable: " CYAN << &string << std::endl;
	std::cout << WHITE "The memory address held by stringPTR: " CYAN << stringPTR << std::endl;
	std::cout << WHITE "The memory address held by stringREF: " CYAN << &stringREF << WHITE << std::endl << std::endl;

	std::cout << "The value of the string variable: " CYAN << string << std::endl;
	std::cout << WHITE "The value pointed to by stringPTR: " CYAN << *stringPTR << std::endl;
	std::cout << WHITE "The value pointed to by stringREF: " CYAN << stringREF << WHITE << std::endl;

	return (0);
}
