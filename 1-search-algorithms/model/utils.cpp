#include <iostream>
#include "utils.h"

void printVector(int *vector, int size, std::string vectorDescription)
{
    std::cout << "Your '" << vectorDescription << "' is:" << std::endl;

    for (int i = 0; i < size; i++)
        std::cout << vector[i] << " ";

    std::cout << std::endl;
}