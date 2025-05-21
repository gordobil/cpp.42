#include <string>
#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::ifstream	infile(argv[1]);
	std::ofstream	outfile;
	std::string		filename = argv[1];

	outfile.open((filename + ".replace").c_str());
	if (argc != 3 || !infile.is_open() || !outfile.is_open())
		return (1);

	return (0);
}
