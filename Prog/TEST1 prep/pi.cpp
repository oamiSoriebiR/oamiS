#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
  int k, d;
  std::cin >> k;
  std::cin >> d;
  double pi=0.0;
  for(int i=0; i<=k; i++){
    pi += pow(-1, i)/(2*i+1); 
  }

  std::cout << std::fixed << std::setprecision(d) << 4*pi ;

  return 0;
}