#include <iostream>

int main()
{
  int n;
  std::cin >> n;
  for(int i ; i<=n ; i++)
  {
    if (i%3==0 && i%5!=0)
    {
      std::cout << "Fizz ";
    }
    else if (i%3!=0 && i%5==0)
    {
      std::cout << "Buzz ";
    }
    else if (i%3==0 && i%5==0)
    {
      continue;
    }
    else {
      std::cout << i << " ";
    }
  }
  return 0;
}