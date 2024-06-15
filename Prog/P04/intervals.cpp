
#include <iostream>
#include "interval.h" 
using namespace std;

struct interval;
int search_intervals(time_of_day t, const interval a[], int n, interval& u){
    int total = 0;
    u.start.h = 24;
    u.start.m = 60;
    u.end.h = 0;
    u.end.m = 0;
    for (int i = 0; i < n; i++){
        if (a[i].start.h < t.h || (a[i].start.h == t.h && a[i].start.m <= t.m)){
            if (a[i].end.h > t.h || (a[i].end.h == t.h && a[i].end.m > t.m)){
                if (a[i].start.h < u.start.h || (a[i].start.h == u.start.h && a[i].start.m < u.start.m)){
                    u.start.h = a[i].start.h;
                    u.start.m = a[i].start.m;
                }
                if (a[i].end.h > u.end.h || (a[i].end.h == u.end.h && a[i].end.m > u.end.m)){
                    u.end.h = a[i].end.h;
                    u.end.m = a[i].end.m;
                }
                total += (a[i].end.h - a[i].start.h) * 60 + a[i].end.m - a[i].start.m;
            }
        }
    }
    if (u.start.h == 24){
        u.start = t;
        u.end = t;
        return 0;
    }
    return total;
}
int main() {
    const int n = 5;
    const time_of_day t = { 15, 15 };
    const interval a[n] = { { { 12, 30 }, { 14, 30 } },
                            { { 14, 30 }, { 15, 30 } },
                            { { 15, 10 }, { 16, 10 } },
                            { {  9, 30 }, { 15, 15 } },
                            { {  9, 45 }, { 15, 16 } } };
    interval u;
    int d = search_intervals(t, a, n, u);
    cout << d << ' ' << u.start.h << ':' << u.start.m << '-' << u.end.h << ':' << u.end.m << '\n';
    return 0;
}
