#include "bubble.hpp"

void bubble(int * array, int size)
{
    for (int i = size - 1; i > 0; i--)
    {
        if (array[i] < array[i - 1])
        {
            swap(array, i, i - 1);
        }
    }
    
}

void bubbleSort(int * array, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        bubble(array, size);
    }
}

