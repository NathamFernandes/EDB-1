#include "binary-search.h"

#include <iostream>

int binarySearch(int key, int *vector, int size)
{
    int start = 0;
    int end = size - 1;
    int mid;

    while (start <= end)
    {
        mid = (start + end) / 2;

        if (vector[mid] > key)
            end = mid - 1;
        else if (vector[mid] < key)
            start = mid + 1;
        else
            return mid;
    }

    return -1;
}