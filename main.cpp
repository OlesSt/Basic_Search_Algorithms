#include <QCoreApplication>
#include <iostream>

#include "Binary_Search.h"
#include "Linear_Search.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::cout << " ===== LINEAR SEARCH ===== " << std::endl;
    LinearSearch::DoLinearSearch();

    std::cout << " ===== BINARY SEARCH ===== " << std::endl;
    BinarySearch::DoBinarySearch();

    return a.exec();
}
