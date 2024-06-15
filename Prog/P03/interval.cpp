#include <iostream>

struct time_of_day {
  unsigned char h; // Hours [0,23]
  unsigned char m; // Minutes [0,59]
};
struct interval {
  time_of_day start; // Start time
  time_of_day end;   // End time
};


interval intersection(interval i1, interval i2) {
  // Return the intersection of two intervals. if it is empty, return an interval with start and end time both set to {0,0}.
    interval i;
    if (i1.start.h > i2.start.h || (i1.start.h == i2.start.h && i1.start.m > i2.start.m)) {
        i1.start = i2.start;
    }
    if (i1.end.h < i2.end.h || (i1.end.h == i2.end.h && i1.end.m < i2.end.m)) {
        i1.end = i2.end;
    }
    if (i1.start.h > i1.end.h || (i1.start.h == i1.end.h && i1.start.m > i1.end.m)) {
        i.start.h = 0;
        i.start.m = 0;
        i.end.h = 0;
        i.end.m = 0;
    }
    else {
        i = i1;
    }
    return i;
}