def next_prime(number):
    while True:
        number=number+1
        if is_prime(number):
            return number
def is_prime(number):
    if number==1:
        return False
    for i in range(2,number):
        if number%i==0:
            return False
    return True