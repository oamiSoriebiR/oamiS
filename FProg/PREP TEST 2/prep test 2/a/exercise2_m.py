def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def next_prime(number):
    next_num = number + 1
    while True:
        if is_prime(next_num):
            return next_num
        next_num += 1

    