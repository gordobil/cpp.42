#include "Span.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    try {
        Span sp(10000);

        std::srand(time(NULL));
        for (int i = 0; i < 10000; ++i)
            sp.addNumber(std::rand());

        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

// int main()
// {
// Span sp = Span(5);
// sp.addNumber(6);
// sp.addNumber(3);
// sp.addNumber(17);
// sp.addNumber(9);
// sp.addNumber(11);

// std::cout << sp.shortestSpan() << std::endl;
// std::cout << sp.longestSpan() << std::endl;
// return 0;
// }