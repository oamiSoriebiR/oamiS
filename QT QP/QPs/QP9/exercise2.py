def variance(alist):
    N=len(alist)
    média=sum(alist)/N
    diff_squared= map(lambda x: (x-média)**2 , alist)
    var=sum(diff_squared)/N
    return round(var, 3)


