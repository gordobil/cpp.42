
#include "RPN.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2){
		std::cerr << "Error: invalid number of arguments." << std::endl;
		return (1);
	}

	try{
		RPN	calculate((std::string(argv[1])));}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;}

	return (0);
}
