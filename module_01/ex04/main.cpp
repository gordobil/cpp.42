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

#include "files.hpp"

int main(int argc, char **argv)
{
	std::ofstream	file(argv[1]);

	if (argc != 4 || !file.is_open())
		return (std::cout << RED "Error" WHITE << std::endl, -1);
}
