#include <iostream>

char* duplicate(const char s[]) {
 
  int length = 0;
  while (s[length] != '\0') {
    length++;
  }

  char* duplicateString = new char[length + 1];


  for (int i = 0; i < length; i++) {
    duplicateString[i] = s[i];
  }
  duplicateString[length] = '\0';

  return duplicateString;
}