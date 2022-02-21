#include "selection.hpp"

void swap(int *a, int x, int y)
{
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

int locationOfSmallest(int *array, int start, int end)
{
    int j = start;
    for (int i = start; i <= end; i++)
    {
        if (array[i] < array[j])
        {
            j = i;
        }
    }
    return j;
}

void selectionSort(int *array, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int j = locationOfSmallest(array, i, size - 1);
        swap(array, i, j);
    }
}