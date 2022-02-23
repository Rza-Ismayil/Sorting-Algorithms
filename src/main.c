#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "simple.h"
#include "selection.h"
#include "bubble.h"
#include "insertion.h"
#include "dictionaryMap.h"
#include "search.h"

void printArray(int *array, int size);
void cleanBuffer();

int main(int argc, char **argv) {

	// int array[] = {18, 8, 22, 20, 16, 2, 12, 10, 6, 0, 14, 4};
	// int size = sizeof(array) / sizeof(int);
	// printArray(array, size);
	// SIMPLE SORT ~ O(n^2)
	// simpleSort(array, size);
	// SELECTION SORT ~ O(n^2)
	// selectionSort(array, size);
	// BUBBLE SORT ~ O(n^2)
	// bubbleSort(array, size);
	// INSERTION SORT ~ O(n^2)
	// insertionSort(array, size);
	// RZA'S IDEA ~ MAX(size, range)
	// dictionarySort(array, size);
	// printArray(array, size);

	char str[255];

	char target;

	scanf("%[^\n]", str);
	cleanBuffer();
	scanf("%c", &target);


	int index = interpolationSearch(str, strlen(str), target);

	if (index != -1)
		printf("The index of '%c' in stirng '%s' is %d\n",target, str, index);
	else
		printf("The target '%c' not found in string '%s'\n", target, str);

	return 0;
}

void printArray(int *array, int size) {
	for (int i = 0; i < size - 1; i++)
	{
		printf(" %d ~", array[i]);
	}

	printf(" %d \n", array[size - 1]);
}

void cleanBuffer() {
	while (getchar() != '\n');
}
