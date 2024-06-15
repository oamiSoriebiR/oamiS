#include <iostream>
#include "time_of_day.h"
using namespace std;

time_of_day tick(time_of_day t){
    // Increment the time by one minute given the time of day t.

    // If the minutes are less than 59, increment the minutes by 1.
    if (t.m < 59) {
        t.m++;
    }
    // If the minutes are 59, increment the hours by 1 and set the minutes to 0.
    else {
        t.m = 0;
        if (t.h < 23) {
            t.h++;
        }
        else {
            t.h = 0;
        }
    }
    return t;

}
