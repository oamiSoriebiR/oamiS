#include <iostream>
using namespace std;

int max(const int a[], int n){
    //returns the maximum value of all n > 0 elements stored in array a
    int max = a[0];
    for (int i = 1; i < n; i++){
        if (a[i] > max){
            max = a[i];
        }
    }
    return max;
}
int main(){
    const int n = 1;
    const int a[n] = { -123 };
    cout << max(a,n) << '\n';

    const int m = 3; 
    const int b[m] = { -3, -2, -1 };
    cout << max(b, m) << '\n';

    const int o = 4; 
    const int c[o] = { 4, -2, 3, 1 };
    cout << max(c, o) << '\n';

    const int p = 9;
    const int d[p] = { 10, 20, 30, -2, 50, 3, 1, 50, 49 };
    cout << max(d, p) << '\n';


    return 0;
}