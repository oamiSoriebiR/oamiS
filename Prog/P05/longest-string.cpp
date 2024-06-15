#include <iostream>

using namespace std; 
const char* longest(const char* arr[]){
    int i=0,ret=0,i2=0,size=0,count=0;
    while(arr[i]!=nullptr){
        while(arr[i][i2]!=0){
            count++;
            i2++;
        }
        if(count>=size){
            ret=i;
            size=count;
        }
        count=0;i2=0;i++;
    }
    return arr[ret];
}
