def evaluate(a:list, x:int) -> int:
    from functools import reduce
    f= list(enumerate(a))
    b= list(map(lambda a: a[1]*x**a[0], f))
    c= reduce(lambda x,y: x+y, b)
    return c

