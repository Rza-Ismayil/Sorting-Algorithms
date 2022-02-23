#include "dictionaryMap.h"

void findMinAndMax(int *array, int size, int *min, int *max)
{
    *min = array[0];
    *max = array[0];

    for (int i = 0; i < size; i++)
    {
        if (*min > array[i])
        {
            *min = array[i];
        }
        if (*max < array[i])
        {
            *max = array[i];
        }
    }
}

void dictionarySort(int *array, int size)
{
    int min, max;

    findMinAndMax(array, size, &min, &max);

    int * dictionaryMap = (int *) calloc(max - min + 1, sizeof(int));

    for (int i = 0; i < size; i++)
    {
        dictionaryMap[array[i] - min]++;
    }

    int arrayIndex = 0;
    for (int i = 0; i < max - min + 1; i++)
    {
        for (int j = 0; j < dictionaryMap[i]; j++)
        {
            array[arrayIndex] = i + min;
            arrayIndex++;
        }
    }
    
    free(dictionaryMap);
}