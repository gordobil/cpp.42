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

#include <iostream>
#include <string>
#include <fstream>

# define RED	"\033[1;95m"
# define CYAN	"\033[1;31m"
# define WHITE	"\033[0m"

std::string	replace_line(std::string line, std::string s1, std::string s2)
{
	std::string	replaced;
	size_t		start = 0;
	size_t		end = line.find(s1, 0);

	if (end == std::string::npos)
		return (line);
	while (end != std::string::npos)
	{
		replaced += line.substr(start, end - start) + s2;
		start = end + s1.size();
		end = line.find(s1, start);
	}
	if (start < line.size())
		replaced += line.substr(start, line.size());
	return (replaced);
}

int main(int argc, char **argv)
{
	std::ifstream	file;
	std::ofstream	replace;

	file.open(argv[1], std::ios::in);
	if (argc != 4 || !file.is_open())
		return (std::cout << RED "Error" WHITE << std::endl, -1);
	std::string filename = argv[1];
	replace.open((filename + ".replace").c_str(), std::ios::out);
		if (!replace.is_open())
	{
		file.close();
		std::cout << RED "Error" WHITE << std::endl;
		return (-1);
	}

	for (std::string line; std::getline(file, line);)
	{
		replace << replace_line(line, argv[2], argv[3]);
		if (!file.eof())
			replace << std::endl;
	}

	file.close();
	replace.close();

	return (0);
}
