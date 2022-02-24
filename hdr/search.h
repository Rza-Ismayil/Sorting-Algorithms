#ifndef __SEARCH__
#define __SEARCH__

#include <stdio.h>
#include <stdlib.h>

int linearSearch(char * string, int length, char target);
int linearSearchR(char * string, int length, char target);
int _linearSearchR(char * string, int length, int index, char target);
int binarySearchI(char * string, int length, char target);
int binarySearchR(char * string, int length, char target);
int _binarySearchR(char * string, int left, int right, char target);
int interpolationSearch(char * string, int length,char target);

#endif // __SEARCH__