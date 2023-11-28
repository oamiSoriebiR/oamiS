def test_differences(alist):
    return [alist[i+1]-alist[i] for i in range(len(alist)-1)]

def differences(alist):
    z=zip(alist, alist[1:])
    diff= lambda x: x[1]-x[0]
    m=map(diff, z)
    return list(m)

