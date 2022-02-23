#include "insertion.h"

void insert(int *array, int size, int index)
{
    int keyValue = array[index];
    int j;
    for (j = index - 1; j >= 0 && array[j] > keyValue; j--)
    {
        array[j + 1] = array[j];
    }
    array[j + 1] = keyValue;
}

void insertionSort(int *array, int size)
{
    for (int i = 1; i < size; i++)
    {
        insert(array, size, i);
    }
}
