#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include "easyfind.hpp"

int main() {
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    std::list<int> lst;
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);

    std::deque<int> deq;
    deq.push_back(100);
    deq.push_back(200);
    deq.push_back(300);

    std::cout << "Searching in vector:" << std::endl;
    easyfind(vec, 20);
    easyfind(vec, 40);

    std::cout << "\nSearching in list:" << std::endl;
    easyfind(lst, 2);
    easyfind(lst, 4);

    std::cout << "\nSearching in deque:" << std::endl;
    easyfind(deq, 300);
    easyfind(deq, 500);

    return 0;
}
