#include "search.h"

int linearSearch(char * string, int length,char target) {
  register int index;
  for (index = 0; index < length; index++) {
    if (target == string[index]) return index;
  }
  return -1;
}

int binarySearchI(char * string, int length, char target) {
  register int left = 0, right = length - 1, middle;

  while (left <= right) {
    middle = (left + right) / 2;

    if (target == string[middle]) return middle;
    
    else if (target > string[middle]) left = middle + 1;
    
    else right = middle - 1;
  }
  return -1;
}

int interpolationSearch(char * string, int length,char target) {
  register int left = 0, right = length - 1, middle;

  while (left <= right) {
    if (string[left] == string[right]) {
      middle = (left + right) / 2;
    } else {
      middle = left + (right - left) * (target - string[left]) / (string[right] - string[left]);
      if (middle < left || middle > right) {
        middle = (left + right) / 2;
      }
    }
    if (target == string[middle]) {
      return middle;
    }
    else if (target > string[middle]) {
      left = middle + 1;
    } else {
      right = middle - 1;
    }
  }
  return -1;
}