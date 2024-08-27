#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H

enum Order
{
    ASC = 1,
    DESC = 2,
};

int linearSearch(int key, int *vector, int size, int order = 0);

#endif