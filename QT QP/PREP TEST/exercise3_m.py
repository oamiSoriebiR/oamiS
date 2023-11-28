def approx_cos(x, n):
    import math
    a= 0
    for i in range (n):
     a+=((-1)**i)*(x**(2*i))/(math.factorial(2*i))
    return round(a,5)
