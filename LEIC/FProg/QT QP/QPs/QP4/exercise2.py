def adigits(a, b, c):
    d= min (a,b,c)
    e= max (a,b,c)
    f= a+b+c-d-e
    g= d*100+f*10+e
    return g
