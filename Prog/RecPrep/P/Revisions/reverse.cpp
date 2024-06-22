#include <iostream>

int main()
{
  int number;
  std::cin >> number;

  int result;

  while (number > 0)
  {
    result = result * 10 + number % 10;
    number = (number - (number % 10)) / 10;
  }

  std::cout << result;

  return 0;
}