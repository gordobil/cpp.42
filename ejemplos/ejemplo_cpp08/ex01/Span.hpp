#pragma once
#include <vector>
#include <stdexcept>
#include <algorithm>
#include <limits>

class Span {
public:
    Span(unsigned int N);
    ~Span();
    Span(const Span& other);
    Span& operator=(const Span& other);

    void addNumber(int num);
    int shortestSpan() const;
    int longestSpan() const;

private:
    unsigned int _maxSize;
    std::vector<int> _numbers;
};
