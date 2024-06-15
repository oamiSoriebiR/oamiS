#include <iostream>
#include "cdata.h"

int* expand_cdata(const cdata a[], int n) {
  int totalValues = 0;
  for (int i = 0; i < n; i++) {
    totalValues += a[i].count;
  }

  int* expandedArray = new int[totalValues];
  int index = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < a[i].count; j++) {
      expandedArray[index] = a[i].value;
      index++;
    }
  }

  return expandedArray;
}