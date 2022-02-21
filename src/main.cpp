#include <stdio.h>
#include <stdlib.h>

#include "simple.hpp"
#include "selection.hpp"
#include "bubble.hpp"
#include "insertion.hpp"
#include "dictionaryMap.hpp"

void printArray(int *array, int size);

int main(int argc, char **argv)
{

	int array[] = {18, 8, 22, 20, 16, 2, 12, 10, 6, 0, 14, 4};
	int size = sizeof(array) / sizeof(int);
	printArray(array, size);


	// SIMPLE SORT ~ O(n^2)
	// simpleSort(array, size);

	// SELECTION SORT ~ O(n^2)
	// selectionSort(array, size);

	// BUBBLE SORT ~ O(n^2)
	// bubbleSort(array, size);

	// INSERTION SORT ~ O(n^2)
	// insertionSort(array, size);

	// RZA'S IDEA  ~ MAX(size, range)
	dictionarySort(array, size);

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
