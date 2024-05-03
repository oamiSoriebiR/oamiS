def ugly(n):
    number=int(n)
    if number<=0:
        return False
    while number%2==0:
        number=number/2
    if number==1:
        return True
    while number%3==0:
        number=number/3
    if number==1:
        return True
    while number%5==0:
        number=number/5
    if number==1:
        return True
    else:
        return False

        
    
