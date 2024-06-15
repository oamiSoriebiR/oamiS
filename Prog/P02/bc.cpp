/*
Binomial coefficients occur in many areas of mathematics. A possible formulation of binomial coefficients is as follows for n>=0
 and 0≤k≤n
:

(nk)=n×(n−1)×…×(n−k+1)k×(k−1)×…×1

Write a C++ function unsigned long bc(unsigned long n, unsigned long k) to compute binomial coefficients.

Hint: be careful to use only unsigned long variables to avoid numerical overflows.

*/

#include <iostream>
using namespace std;

unsigned long bc(unsigned long n, unsigned long k){
    unsigned long result = 1;
    for (unsigned long i = 1; i <= k; i++){
        result *= n;
        result /= i;
        n--;
    }
    return result;
}
