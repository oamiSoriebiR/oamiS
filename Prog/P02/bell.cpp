#include <iostream>
using namespace std;

unsigned long bc(unsigned long n, unsigned long k){
    unsigned long result = 1;
    for (unsigned long i = 1; i <= k; i++){
        result *= n;
        result /= i;
        n--;
    }
    return result;
}

unsigned long bell(unsigned long n){
    unsigned long result = 0;
    if (n == 0 or n==1){
        return 1;
    }
    for (unsigned long k = 0; k <= n-1; k++){
        result += bc(n-1, k)*bell(k);
    }
    return result;
}

int main(){;
    cout << bell(0) << '\n'; // 1
    cout << bell(1) << '\n'; // 1
    cout << bell(2) << '\n'; // 2
    cout << bell(3) << '\n'; // 5
    cout << bell(4) << '\n'; // 15
    cout << bell(6) << '\n'; // 203
    return 0;
}