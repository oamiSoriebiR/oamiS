#include <iostream>
#include <cmath>

bool isPrime(int number)
{
  if (number==1 || number==0)
  {
    return false;
  }

  for (int i = 2; i <= sqrt(number) ; i++)
  {
    if (number % i == 0)
    {
      return false;
    }
  }
  return true;
}

int main()
{

  int limit;
  std::cin >> limit;

  for (int i=2 ; i <= limit ; i++)
  {
    if (isPrime(i))
    {
      std::cout << i << " ";
    }
  }
  return 0;
}