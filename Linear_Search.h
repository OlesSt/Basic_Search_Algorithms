#ifndef LINEAR_SEARCH_H
#define LINEAR_SEARCH_H

#include <iostream>
#include "TestArray.h"

namespace LinearSearch
{

template <typename T>
bool LinearSearch(T key, std::vector<T>vec)
{
    for(int i = 0; i<vec.size(); i++)
        if (key == vec.at(i))
            std::cout << "The key : " << key << " is found" << std::endl;
    return true;
    return false;
}

void DoLinearSearch()
{
    srand(static_cast<unsigned int>(time(nullptr)));
//    int key = rand() % 10;
    const int size = 10;
    std::vector<int> linear_array(size);

    InitArray(linear_array);
    ShowArray(linear_array);

    int key {5};
    LinearSearch(key, linear_array);
}

}

#endif // LINEAR_SEARCH_H
