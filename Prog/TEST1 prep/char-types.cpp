#include <iostream>

int main(){
  int n;
  std::cin >> n;

  int number = 0, alpha = 0, notalphanum = 0;

  for(int i=1; i<=n; i++){

    char c;
    std::cin >> c;

    if (c>='0' && c<='9'){
      number++;
    }
    else if ((c>='a' && c<='z') || (c>='A' && c<='Z')){
      alpha++;
    }
    else{
      notalphanum++;
    }
  }

  std::cout << alpha << " "; 
  std::cout << number << " " ;
  std::cout << notalphanum << "\n";
  
  return 0;
}


