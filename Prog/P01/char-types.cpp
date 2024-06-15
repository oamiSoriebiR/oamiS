#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int NumCount = 0;
    int AlphaCount = 0;
    int notAlphaNum = 0;

    for (int i = 0; i<n; i++){
        char c;
        
        cin >> c;

        if (isdigit(c)){
            NumCount++;
        }
        else if (isalpha(c)){    
            AlphaCount++;
        }
        else{ 
            notAlphaNum++;
        } // qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq


    }

cout<< AlphaCount <<" "<<NumCount<<" "<<notAlphaNum << endl;
    return 0;
}
