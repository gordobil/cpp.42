#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <deque>

template<typename T>

int easyfind(T& container, int number)
{
	if (std::find(container.begin(), container.end(), number) == container.end())
    {
        std::cout << "Not found" << std::endl;
        return (1);
    }
    else
    {
        std::cout << "Found" << std::endl;
        return (0);
    }
}   

#endif