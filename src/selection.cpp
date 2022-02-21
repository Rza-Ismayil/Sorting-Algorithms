#include "selection.hpp"

void swap(int *a, int x, int y)
{
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

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