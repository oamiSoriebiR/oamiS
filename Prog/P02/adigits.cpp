// A function to write the bigest number possible with the digits a, b, and c.
//--------------------------
#include <iostream>
using namespace std;

int adigits(int a, int b, int c){
    int maxi = max(a, max(b, c));
    int mini = min(a, min(b, c));
    int mid = a + b + c - maxi - mini;
    return maxi*100 + mid*10 + mini;
}
