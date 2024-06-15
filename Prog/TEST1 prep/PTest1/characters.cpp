#include <iostream>

int main(){
  char input;
  std::cin >> input;

  if((input>='a' and input<='z') || (input>='A' and input<='Z')) goto print1;
  else if(input>='0' && input<='9') goto print2;
  else goto print3;


print1:
  std::cout << "LETTER";
  return 0;
print2:
  std::cout << "DIGIT";
  return 0;
print3:
  std::cout << "OTHER";
  return 0;
}
