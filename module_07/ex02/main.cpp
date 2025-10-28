
#include "Array.hpp"

#define MAX_VAL 750
int	intra_main()
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}

int	main(int argc, char **argv)
{
	if (argc == 2 && (std::string)argv[1] == "intra")
		return (intra_main());

	Array<int>			v;
	Array<std::string>	s(4);
	Array<int>			i(12);
	Array<char>			c(26);

	  /********************** EMPTY *********************/
	std::cout << RED " ¬ EMPTY ARRAY" << std::endl;
	std::cout << CYAN "v.size=" WHITE << v.size();
	std::cout << CYAN "   *v=" WHITE << *v << std::endl << std::endl;

	  /********************* STRING *********************/
	std::cout << RED " ¬ STRING ARRAY" WHITE << std::endl;
	s[0] = "cero";
	s[1] = "uno";
	s[2] = "dos";
	s[3] = "tres";
	try{
		s[10] = "ten";
	}
	catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << CYAN "s.size=" WHITE<< s.size();
	std::cout << CYAN "   *s=" WHITE<< *s << std::endl << std::endl;
	for (unsigned int x = 0; x < s.size(); x++)
		std::cout << CYAN << x << ": " WHITE << s[x] << std::endl;
	std::cout << std::endl;

	  /********************** INT **********************/
	std::cout << RED " ¬ INT ARRAY" << std::endl;
	for (unsigned int x = 0; x < i.size(); x++)
		i[x] = x;
	std::cout << CYAN "i.size=" WHITE << i.size();
	std::cout << CYAN "   *i=" WHITE << *i << std::endl;
	for (unsigned int x = 0; x < i.size(); x++)
		std::cout << CYAN << x << ": " WHITE << i[x] << std::endl;
	std::cout << std::endl;

	  /********************* CHAR *********************/
	std::cout << RED " ¬ CHAR ARRAY" << std::endl;
	for (unsigned int x = 0; x < c.size(); x++)
		c[x] = 'a' + x;
	std::cout << CYAN "c.size=" WHITE << c.size();
	std::cout << CYAN "   *c=" WHITE << *c << std::endl;
	for (unsigned int x = 0; x < c.size(); x++)
		std::cout << CYAN << x << ": " WHITE << c[x] << std::endl;
	std::cout << std::endl;

	return (0);
} 