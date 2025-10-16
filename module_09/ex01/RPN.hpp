
#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>

class RPN
{
	public:
		RPN(std::string arg);
		RPN(const RPN &copy);
		RPN	&operator=(const RPN &copy);
		~RPN();

		//CALCULATE
		int	calculateRPN(std::string arg);
		int	getAnswer(int a, int b, char token);
};

#endif
