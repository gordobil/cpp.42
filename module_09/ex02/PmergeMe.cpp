
#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char **args){
	getNumbers(args);
	sortNumbers();
}

PmergeMe::PmergeMe(const PmergeMe &copy){
	vNum  = copy.get_vNum();
	dNum  = copy.get_dNum();
	vSort = copy.get_vSort();
	dSort = copy.get_dSort();
	vTime = copy.get_vTime();
	dTime = copy.get_dTime();
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &copy){
	vNum  = copy.get_vNum();
	dNum  = copy.get_dNum();
	vSort = copy.get_vSort();
	dSort = copy.get_dSort();
	vTime = copy.get_vTime();
	dTime = copy.get_dTime();
	return (*this);
}

PmergeMe::~PmergeMe(){}

// GETTERS
std::vector<int>	PmergeMe::get_vNum(void)const{
	return (vNum); }

std::deque<int>		PmergeMe::get_dNum(void)const{
	return (dNum); }

std::vector<int>	PmergeMe::get_vSort(void)const{
	return (vSort); }

std::deque<int>		PmergeMe::get_dSort(void)const{
	return (dSort); }

double				PmergeMe::get_vTime(void)const{
	return (vTime); }

double				PmergeMe::get_dTime(void)const{
	return (dTime); }

// SORT
void	PmergeMe::getNumbers(char **args){
	for (int i = 0; args[i] != NULL; i++)
	{
		for (int j = 0; args[i][j] != '\0'; j++){
			if (!isdigit(args[i][j]))
				throw std::runtime_error("Error: invalid argument.");
		}
		if (atol(args[i]) > std::numeric_limits<int>::max())
			throw std::runtime_error("Error: number out of limits.");
		vNum.push_back(atoi(args[i]));
		dNum.push_back(atoi(args[i]));
	}
}

template <typename Container>
Container	PmergeMe::sortFJ(const Container &cont){
	if (cont.size() <= 1)
		return (cont);

	Container	min, max;
	for (typename Container::const_iterator i = cont.begin(); i != cont.end();){
		int	small = *i;
		i++;
		if (i != cont.end()){
			int	big = *i;
			i++;
			if (small > big)
				std::swap(small, big);
			min.push_back(small);
			max.push_back(big);
		}
		else
			max.push_back(small);
	}

	Container	sorted = sortFJ(max);

	for (typename Container::iterator iMin = min.begin(); iMin != min.end(); iMin++)
	{
		typename Container::iterator position = std::lower_bound(sorted.begin(), sorted.end(), *iMin);
		sorted.insert(position, *iMin);
	}

	return (sorted);
}

void	PmergeMe::sortNumbers(){
	clock_t	start, end;

	start = clock();
	vSort = sortFJ(vNum);
	end = clock();
	vTime = (((double)(end - start)) / CLOCKS_PER_SEC) * 1000000;

	start = clock();
	dSort = sortFJ(dNum);
	end = clock();
	dTime = (((double)(end - start)) / CLOCKS_PER_SEC) * 1000000;
}

// UTILS
std::ostream	&operator<<(std::ostream &out, const PmergeMe &pmergeMe){
	std::cout << std::fixed << std::setprecision(5);

	out << "  PMERGEME VARIABLES:" << std::endl;
	out << "Vector numbers:\t" << pmergeMe.get_vNum()  << std::endl;
	out << "Deque numbers:\t"  << pmergeMe.get_dNum()  << std::endl;
	out << "Vector sorted:\t"  << pmergeMe.get_vSort() << std::endl;
	out << "Deque sorted:\t"   << pmergeMe.get_dSort() << std::endl;
	out << "Vector timing:\t"  << pmergeMe.get_vTime() << std::endl;
	out << "Deque timing:\t"   << pmergeMe.get_dTime() << std::endl;
	return (out);
}

std::ostream	&operator<<(std::ostream &out, const std::vector<int> &vec){
	for (std::vector<int>::const_iterator i = vec.begin(); i !=vec.end(); i++){
		out << *i;
		if (i + 1 != vec.end())
			out << " ";
	}
	return (out);
}

std::ostream	&operator<<(std::ostream &out, const std::deque<int> &deq){
	for (std::deque<int>::const_iterator i = deq.begin(); i !=deq.end(); i++){
		out << *i;
		if (i + 1 != deq.end())
			out << " ";
	}
	return (out);
}
