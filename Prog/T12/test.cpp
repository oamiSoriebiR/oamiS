
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool func(int a, int b)
{
  if (a % 3 == b % 3)
    return a < b;
  else
    return a % 3 < b % 3;
}

int main()
{
  std::vector<int> v { 6, 8, 2, 3, 7, 0, 5, 1, 0 };
  std::sort(v.begin() + 2, v.end() - 1, func);
  for(int x : v) cout << x;
  
  return 0;
}

