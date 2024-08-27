#include "linear-search.h"

#include <iostream>

int linearSearch(int key, int *vector, int size, int order)
{
    if (size <= 0)
        return -1;

    int position = 0;

    while (position < size)
    {
        if (vector[position] == key)
            return position;
        else if (order == ASC && vector[position] < key)
            return -1;
        else if (order == DESC && vector[position] > key)
            return -1;
        position++;
    }

    return -1;
}