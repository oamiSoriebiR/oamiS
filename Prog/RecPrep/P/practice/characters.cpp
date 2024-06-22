#include <iostream>

int main(){
  char input;
  std::cin >> input;

  if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')) 
    {
      std::cout << "LETTER";
    }

  else if (input >= '0' && input <= '9')
    {
      std::cout << "DIGIT";
    } 
  
  else
    {
      std::cout <<"OTHER";
    }

  return 0;
}