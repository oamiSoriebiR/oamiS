#include <iostream>

bool isMultipleOf3(int i){
  if (i%3==0){
    return true;
  }
  else{
    return false;
  }
}

bool isMultipleOf5(int i){
  if (i%5==0){
    return true;
  }
  else{
    return false;
  }
}

bool isMultipleOfBoth(int i){
  if (isMultipleOf3(i) and isMultipleOf5(i)){
    return true;
  }
  else{
    return false;
  }
}

int main(){
  int inputNum;
  std::cin >> inputNum;

  for(int i=1; i<=inputNum; i++){
    if (isMultipleOfBoth(i)){
      std::cout << "";
    }
    else if (isMultipleOf3(i)){
      std::cout << "Fizz ";
    }

    else if (isMultipleOf5(i)){
      std::cout << "Buzz ";
    }

    else{
      std::cout<<i<<" ";
    }
  }
  std::cout <<"\n";
  return 0;
}