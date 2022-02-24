#include "search.h"

int linearSearch(char * string, int length,char target) {
  register int index;
  for (index = 0; index < length; index++) {
    if (target == string[index]) return index;
  }
  return -1;
}

int linearSearchR(char * string, int length, char target) {
  return _linearSearchR(string, length, 0, target);
}

int _linearSearchR(char * string, int length, int index, char target) {
  if (string[index] == target) return index;
  else {
    if (index == length - 1) return -1;
    else return _linearSearchR(string, length, index + 1, target);
  }
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

int binarySearchR(char * string, int length, char target) {
  return _binarySearchR(string, 0, length - 1, target);
}

int _binarySearchR(char * string, int left, int right, char target) {
  int middle = (right + left) / 2;
  if (string[middle] == target) return middle;
  else if (string[middle] < target) return _binarySearchR(string, middle + 1, right, target);
  else if (string[middle] > target) return _binarySearchR(string, left, middle - 1, target);
  else return -1;
}

//teymur
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