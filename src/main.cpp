#include <stdio.h>
#include <stdlib.h>

#include "simple.hpp"
#include "selection.hpp"

void printArray(int *array, int size);

int main(int argc, char **argv)
{

	int array[] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22};
	int size = sizeof(array) / sizeof(int);


	// SIMPLE SORT
	// simpleSort(array, size);

	// SELECTION SORT
	selectionSort(array, size);



	printArray(array, size);

	return 0;
}

void printArray(int *array, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		printf(" %d ~", array[i]);
	}

	printf(" %d \n", array[size - 1]);
}
