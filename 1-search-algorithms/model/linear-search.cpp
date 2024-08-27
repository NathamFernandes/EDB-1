#include "linear-search.h"

#include <iostream>

int linearSearch(int key, int *vector, int size)
{
    if (size <= 0)
        return -1;

    int position = 0;

    while (position < size)
    {
        if (vector[position] == key)
            return position;
        position++;
    }

    return -1;
}