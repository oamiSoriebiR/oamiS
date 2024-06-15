/*
A quadratic equation of the form ax2+bx+c=0
--in the domain of real numbers is known to have 0, 1, or 2 solutions according to the value of Δ=b2−4ac:

    no solutions if Δ<0
    1 solution x1=−b2a
        if Δ=0
    2 solutions x1=−b−Δ−−√2a and x2=−b+Δ−−√2a
        when Δ>0
Write a C++ function to solve the quadratic equation for the case where a, b, c are integer coefficients, with a≠0:

int solve_eq(int a, int b, int c, double& x1, double& x2)

The function should return the number of solutions for the equation (0, 1, or 2) and, in the case there are solutions, assign the corresponding values to x1 and x2 as described above. x1 and x2 should be set to NAN defined in header cmath when there are no corresponding solutions (x2 = NAN when Δ=0
; and x1 = x2 = NAN when Δ<0
).

To perform the square root computation, you should use the function std::sqrt, defined in header cmath.

Note: the test cases illustrate solutions with a precision of 7 decimal digits.



*/

#include <iostream>
#include <cmath>
using namespace std;

int solve_eq(int a, int b, int c, double& x1, double& x2){
    double delta = b*b - 4*a*c;
    if (delta < 0){
        x1 = x2 = NAN;
        return 0;
    }
    else if (delta == 0){
        x1 = -b/(2.0*a);
        x2 = NAN;
        return 1;
    }
    else{
        x1 = (-b - sqrt(delta))/(2.0*a);
        x2 = (-b + sqrt(delta))/(2.0*a);
        return 2;
    }
}

