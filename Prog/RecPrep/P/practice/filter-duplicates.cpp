#include "print_array.h"

int filter_duplicates(const int a[], int n, int b[])
{
  int previous_num = a[0];
  b[0] = previous_num;
  int copied_total = 1;

  for (int i = 1 ; i < n ; i++)
  {
    if (a[i]!=previous_num)
    {
      b[copied_total] = a[i];
      copied_total++;
    }

    previous_num = a[i];
  }
  return copied_total;
}