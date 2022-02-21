#include <stdio.h>
#include <stdlib.h>

#include "simple.hpp"

void printArray(int * array, int size);

int main(int argc, char ** argv)
{
	// SIMPLE SORT

	int size = 6;
	int array [] = {5, 3, 7, 1, 8, 4};
	simpleSort(array, size);
	printArray(array, size);


	return 0;
}

void printArray(int * array, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		printf(" %d ~", array[i]);
	}

	printf(" %d \n", array[size - 1]);
}
