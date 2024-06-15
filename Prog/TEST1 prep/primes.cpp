#include <iostream>
#include <cmath>

bool isPrime(int i){
  if (i<=1){
    return false; 
  }
  for (int x=2; x<=std::sqrt(i); ++x){
    if (i%x==0){
      return false;
    }
  }
  return true;
}

int main(){
  int number;
  std::cin >> number;

  for(int i=2; i<=number; i++){
    if (isPrime(i)){
      std::cout << i << " ";
    }
  }

  return 0;
}