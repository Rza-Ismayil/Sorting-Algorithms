#include "selection.h"

int locationOfSmallest(int *array, int start, int end)
{
    int minIndex = start;
    for (int i = start; i < end; i++)
    {
        if (array[i] < array[minIndex])
        {
            minIndex = i;
        }
    }
    return minIndex;
}

void selectionSort(int *array, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int j = locationOfSmallest(array, i, size);
        swap(array, i, j);
    }
}