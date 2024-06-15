#include <iostream>
using namespace std;
/*


int main() {
    int x = 10;
    int& xRef = x;
    cout << xRef << " - ";
    cout << ++x << " - ";
    cout << xRef++ << " - ";
    cout << x << " - " << (x==xRef) << endl;
    return 0;}
*/


void f (int& x, int& y) {
    if (x > y) {
        int t = x;
        x = y;
        y = t;
    }
}
void f (int& x, int y, int& z) {
    f(x, y);
    f(y, z);
    f(x, y);
}

int main() {
    int a = 3, b = 1, c = 2;
    f(a, b, c);
    cout << a << " " << b << " " << c << endl;
    return 0;
}
