#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
  int range;
  int precision;
  double pi = 0;

  std::cin >> range;
  std::cin >> precision;

  for (int i=0 ; i <= range ; i++)
  {
    pi += (pow(-1 , i) / (2*i + 1)); 
  }

  std::cout << std::fixed << std::setprecision(precision) << (4 * pi) ;
  
  return 0;
}