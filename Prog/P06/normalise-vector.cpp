#include <vector>
#include "print_vector.h"

template <typename T>
void normalise(std::vector<T> &v, const T &min, const T &max)
{
  for (auto &x : v)
  {
    if (x < min)
    {
      x = min;
    }
    else if (x > max)
    {
      x = max;
    }
  }
}

int main()
{
  vector<int> v{1, 2, 3, 4, 5};
  normalise(v, 1, 5);
  print(v);
  return 0;
}