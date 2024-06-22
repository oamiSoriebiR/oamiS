#include <iostream>

int main()
{
  int n;
  std::cin >> n;

  int number = 0;
  int characters = 0;
  int other = 0;

  char current;

  for (int i=0 ; i < n; i++)
  {
    std::cin >> current;
    if (('0' <= current) && (current <= '9')) 
    {
      number++;
    }
    else if ((('a' <= current) && (current <= 'z')) || (('A' <= current) && (current <= 'Z'))) 
    {
      characters++;
    }
    else other++;
  }
  std::cout << characters << " " << number << " " << other;
  return 0;
}