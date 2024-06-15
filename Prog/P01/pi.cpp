#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int k, d;
    cin >> k >> d;
    double pi = 0;
    for (int n = 0; n <= k; n++) {
        pi += pow(-1, n) / (2 * n + 1);
    }
    pi *= 4;
    cout << fixed << setprecision(d) << pi << endl;
    return 0;
}
