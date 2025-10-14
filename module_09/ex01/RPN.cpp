
#include "RPN.hpp"

RPN::RPN(std::string arg){
	calculateRPN(arg);
}

RPN::RPN(const RPN &copy){
	*this = copy;
}

RPN	&RPN::operator=(const RPN &copy){
	*this = copy;
	return (*this);
}

RPN::~RPN(){}

// CALCULATE
int	RPN::getAnswer(int a, int b, char token){
	switch (token){
		case '+': return (a + b);
		case '-': return (a - b);
		case '*': return (a * b);
		case '/': return (a / b);
		default: return (0);
	}
}

int	RPN::calculateRPN(std::string arg){
	std::stack<int>	numbers;

	for (std::string::iterator i = arg.begin(); i != arg.end(); i++){
		while (*i == ' ')
			i++;
		if (*i == '+' || *i == '-' || *i == '/' || *i == '*'){
			if (numbers.size() < 2)
				return (retError());
			int	tempB = numbers.top();
			numbers.pop();
			int	tempA = numbers.top();
			numbers.pop();
			if (*i == '/' && tempA == 0)
				return (retError());
			numbers.push(getAnswer(tempA, tempB, *i));
		}
		else if (isdigit(*i))
			numbers.push(*i - 48);
		else
			return (retError());
	}
	if (numbers.size() != 1)
		return (retError());
	std::cout << numbers.top() << std::endl;
	return (0);
}

// UTILS
int	retError(){
	std::cerr << "Error" << std::endl;
	return (1);
}
