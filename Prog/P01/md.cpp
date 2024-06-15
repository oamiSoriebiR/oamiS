#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int x1, y1;
    cin>>x1>>y1;
    int sum = 0;
    for (int i = 1; i<n; i++){
        int x2, y2;
        cin>>x2>>y2;
        sum += abs(x1-x2) + abs(y1-y2);
        x1 = x2;
        y1 = y2;
    }
    cout<<sum<<endl;
    return 0;
}
