#include "commons.h"

void swap(int * array, int x, int y) {
    int temp = array[x];
    array[x] = array[y];
    array[y] = temp;
}

int isSorted(int * array, int length) {
    register int index;

    for (index = 0; index < length; index++) {
        if (array[index + 1] < array[index])
            return 0;
    } return 1;
}

void cleanBuffer() {
	while (getchar() != '\n');
}