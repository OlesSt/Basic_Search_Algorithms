#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

#include <iostream>
#include "TestArray.h"

namespace BinarySearch
{

template <typename T>
bool BinarySearch(std::vector<T> &v, T key)
{
    int leftBound = 0;
    int rightBound = v.size() - 1;
    do
    {
        T middle = (leftBound + rightBound) / 2;
        if (key == v.at(middle))
        {
            std::cout << "There Key: " << key << " - is found." << std::endl;
            return true;
        }
        else if (key < v.at(middle))
            rightBound = middle - 1;
        else if (key > v.at(middle))
            leftBound = middle + 1;
    }
    while (leftBound <= rightBound);
    std::cout << "There Key: " << key << " - isn't found." << std::endl;
    return false;
}


void DoBinarySearch()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    const int size = 10;
    std::vector<int> quick_array(size);

    InitArray(quick_array);
    std::sort(quick_array.begin(), quick_array.end());
    ShowArray(quick_array);

    int key {4};
    BinarySearch(quick_array, key);
}

}

#endif // BINARY_SEARCH_H
