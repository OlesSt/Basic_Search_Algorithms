#ifndef TESTARRAY_H
#define TESTARRAY_H

#include <iostream>
#include <vector>

void InitArray(std::vector<int> &v)
{
    for (int i {}; i < v.size(); i++)
        v.at(i) = rand() % 10;
}
void ShowArray(const std::vector<int> v)
{
    for (int i {}; i < v.size(); i++)
        std::cout << v.at(i) << " ";
    std::cout << std::endl;
}


#endif // TESTARRAY_H
