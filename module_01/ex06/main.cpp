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

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl		harl;

	if (argc != 2)
	{
		std::cout << "Invalid arguments." << std::endl;
		return (1);
	}

	harl.complain((std::string(argv[1])));

	return (0);
}
