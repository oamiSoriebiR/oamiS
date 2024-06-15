/*
Write a C++ function void advance(int delta, int& d, int& m, int& y) to update a date, implicitly defined by d/m/y, by delta days.

You can assume that delta is greater or equal to 0 and that the values of d, m, and y define a valid date when the function is called. On exit, d, m, and y should represent an elapse of delta days over the original date.

Note that you should account for leap years: y is a leap year (“bissexto'') if it is divisible by 4, except when it is divisible by 100 but not 400 (e.g., 2004 and 2000 are leap years, but 2100 is not).

*/

#include <iostream>
using namespace std;

//--------------------------//
bool isLeap(int y){
    return (y%4==0 && (y%100!=0 || y%400==0));
}

int daysInMonth(int m, int y){
    if (m==2){
        return isLeap(y) ? 29 : 28;
    }
    else if (m==4 || m==6 || m==9 || m==11){
        return 30;
    }
    else{
        return 31;
    }
}

void advance(int delta, int& d, int& m, int& y){
    while (delta > 0){
        int days = daysInMonth(m, y) - d + 1;
        if (delta >= days){
            delta -= days;
            d = 1;
            m++;
            if (m > 12){
                m = 1;
                y++;
            }
        }
        else{
            d += delta;
            delta = 0;
        }
    }
}

//--------------------------//