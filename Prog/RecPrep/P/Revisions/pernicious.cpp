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

int countOnes(int number)
{
  int count = 0;
  while (number > 0)
  {
    if (number % 2 == 1)
    {
      count++;
    }
    number = number / 2;
  }
  return count;
}

int main()
{
  int a;
  int b;
  std::cin >> a;
  std::cin >> b;

  for (int i=a ; i <= b ; i++)
  {
    if (isPrime(i) && isPrime(countOnes(i)))
    {
      std::cout << i << " ";
    }
  }
  return 0;
}