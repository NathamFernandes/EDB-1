#include <iostream>

#include "utils.h"
#include "linear-search.h"
#include "binary-search.h"

int main()
{
    unsigned int size;
    int key, keyIndex;
    int option;

    std::cout << "What's the size of the vector?" << std::endl;
    std::cin >> size;

    int *vector = new int[size];
    std::cout << "Insert the values of the array." << std::endl;

    for (unsigned int i = 0; i < size; i++)
        std::cin >> vector[i];

    while (true)
    {
        std::cout << "Which search algorithm do you want to use?" << std::endl;
        std::cin >> option;

        if (option == 0)
        {
            std::cout << "Exiting..." << std::endl;
            break;
        }

        std::cout << "Which element do you want to find?" << std::endl;
        std::cin >> key;

        keyIndex = -1;

        switch (option)
        {
        case 1: // Linear search
            keyIndex = linearSearch(key, vector, size);
            break;
        case 2:
            break;
        default:
            break;
        }

        if (keyIndex == -1)
            std::cout << "Your element is not in this Vector" << std::endl;
        else
            std::cout << "Your element is at Index " << keyIndex << std::endl;
    }

    return 0;
}