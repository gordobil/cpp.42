#include <string>
#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::ifstream	infile;
	std::ofstream	outfile;

	infile.open(argv[1]);
	if (argc != 4 || !infile.is_open())
	{
		infile.close();
		std::cout << "Error" << std::endl;
		return (1);
	}
	outfile.open((std::string(argv[1]) + ".replace").c_str());
	
	for (std::string line; std::getline(infile, line);)
	{
		std::string	replace;
		size_t		e = line.find(std::string(argv[2]), 0);
		size_t		s = 0;

		if (e == std::string::npos)
			replace = line;
		else
		{
			while (e != std::string::npos)
			{
				replace += line.substr(s, e - s) + std::string(argv[3]);
				s = e + std::string(argv[2]).size();
				e = line.find(std::string(argv[2]), s);
			}
			if (s < line.size())
				replace += line.substr(s, line.size());
		}

		outfile << replace;
		if (!infile.eof())
			outfile << std::endl;
	}

	infile.close();
	outfile.close();

	return (0);
}
