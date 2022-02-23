#ifndef __SEARCH__
#define __SEARCH__

#include <stdio.h>
#include <stdlib.h>

int linearSearch(char * string, int length, char target);
int binarySearchI(char * string, int length, char target);
int interpolationSearch(char * string, int length,char target);

#endif // __SEARCH__