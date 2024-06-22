#include <algorithm>

int adigits(int a, int b, int c)
{
  int maxi = std::max(a, std::max(b, c));
  int mini = std::min(a, std::min(b, c));
  int medi = a + b + c - maxi - mini;

  return (maxi*100 + medi*10 + mini);
}