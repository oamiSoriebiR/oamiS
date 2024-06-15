#include <algorithm>

int median(const int a[], int n) {
  int* tmp = new int[n];
  std::copy(a, a + n, tmp);
  std::sort(tmp, tmp + n);

  int medianValue;
  if (n % 2 == 1) {
    medianValue = tmp[n / 2];
  } else {
    medianValue = (tmp[n / 2 - 1] + tmp[n / 2]) / 2;
  }

  delete[] tmp;
  return medianValue;
}