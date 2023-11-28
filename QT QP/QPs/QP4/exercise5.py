def deriv(f):
    def função(x):
        h=0.001
        a=(f(x+h)-f(x))/h
        return round(a , 3)
    return função