
#include "Span.hpp"

Span::Span(unsigned int N){
	max = N;
}

Span::Span(const Span &copy){
	max = copy.getMax();
	container = copy.getContainer();
}

Span	&Span::operator=(const Span &copy){
	max = copy.getMax();
	container = copy.getContainer();
	return (*this);
}

Span::~Span(){}


// UTILS
unsigned int	Span::getMax(void)const{
	return (max);
}

std::vector<int>	Span::getContainer(void)const{
	return (container);
}

// FUNCTIONS
void	Span::addNumber(int n){
	if (container.size() < max)
		container.push_back(n);
	else
		throw ExceptionMessage("Not enough space in container.");
}

int	Span::longestSpan(void)const{
	if (container.size() < 2)
		throw ExceptionMessage("Not enough elements to compare.");

	int	maxN = *std::max_element(container.begin(), container.end());
	int	minN = *std::min_element(container.begin(), container.end());
	return (maxN - minN);
}

int	Span::shortestSpan(void)const{
	if (container.size() < 2)
		throw ExceptionMessage("Not enough elements to compare.");

	int	minSpan;
	if (container[0] > container[1])
		minSpan = container[0] - container[1];
	else
		minSpan = container[1] - container[0];

	for (int i = 0; i < (int)container.size() - 1; i++)
	{
		if (container[i] > container[i + 1] && (container[i] - container[i + 1] < minSpan))
			minSpan = container[i] - container[i + 1];
		else if (container[i] < container[i + 1] && (container[i + 1] - container[i] < minSpan))
			minSpan = container[i + 1] - container[i];
	}
	return (minSpan);
}

// EXCEPTIONS
const char	*Span::ExceptionMessage::what() const throw(){
	return (error);
}
