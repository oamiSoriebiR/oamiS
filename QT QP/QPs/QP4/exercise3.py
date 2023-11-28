def var_numbers(number,precision=2):
    a=(((number**2)+number)/2)/number
    b=0
    for i in range (1, number+1):
        b+=((i-a)**2)
        c=b/number
    r=round((c), precision)
    return r
    