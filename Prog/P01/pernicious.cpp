#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;

}

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        int count = 0;
        int n = i;
        while (n > 0) {
            if (n % 2 == 1) {
                count++;
            }
            n /= 2;
        }
        if (is_prime(count) && is_prime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}

