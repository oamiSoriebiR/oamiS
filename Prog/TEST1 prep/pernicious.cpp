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


bool isPernicious(int i){
  std::



}