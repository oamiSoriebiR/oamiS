#include <iostream>
using namespace std;

unsigned long hstr_to_integer(const char hstr[]){
    unsigned long result = 0;
    int i = 0;
    while (hstr[i] != '\0'){
        result *= 16;
        if (hstr[i] >= '0' && hstr[i] <= '9'){
            result += hstr[i] - '0';
        } else if (hstr[i] >= 'a' && hstr[i] <= 'f'){
            result += hstr[i] - 'a' + 10;
        } else if (hstr[i] >= 'A' && hstr[i] <= 'F'){
            result += hstr[i] - 'A' + 10;
        }
        i++;
    }
    return result;
}

