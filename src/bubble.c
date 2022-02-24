#include "bubble.h"

int bubble(int * array, int size)
{
    int swapped = 0;
    for (int i = size - 1; i > 0; i--)
    {
        if (array[i] < array[i - 1])
        {
            swap(array, i, i - 1);
            swapped = 1;
        }
    }
    return swapped;
}

void bubbleSort(int * array, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int swapped = bubble(array, size);
        if(!swapped)
            return;
    }
}

