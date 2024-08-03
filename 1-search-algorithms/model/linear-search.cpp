#include "linear-search.h"

#include <iostream>

int linearSearch(int key, int *vector, int size)
{
    unsigned int pos = 0;

    while (pos < size)
    {
        if (vector[pos] == key)
            return pos;
        pos++;
    }

    return -1;
}