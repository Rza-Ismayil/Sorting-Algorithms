#include "commons.hpp"

void swap(int * array, int x, int y)
{
    int temp = array[x];
    array[x] = array[y];
    array[y] = temp;
}