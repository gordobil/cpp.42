/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*                                                                            */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:23:20 by ngordobi          #+#    #+#             */
/*   Updated: 2025/02/17 12:23:20 by ngordobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

# define RED	"\033[1;95m"
# define WHITE	"\033[0m"

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << RED "* LOUD AND UNBEAREBLE FEEDBACK NOISE *" WHITE << std::endl;
		return (1);
	}

	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
				argv[i][j] = argv[i][j] - 32;
			std::cout << argv[i][j];
		}
		std::cout << ' ';
	}
	std::cout <<std::endl;

	return (0);
}
