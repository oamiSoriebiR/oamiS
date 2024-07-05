"""def digit_counter(n, count=1):
    print(count)
    if n<10: return count
    else:
        return digit_counter(n//10, count+1)
    


def sum_digits_rec(n):
    if n<10: return n
    else: return (n%10+ sum_digits_rec(n//10))

def digits_average(n):
    return round(sum_digits_rec(n)/digit_counter(n))

print (digit_counter(123456789))

import math


def average(a:int,b:int) -> int:
        return math.ceil((a+b)/2)


def digits_average_helper(n,avg,power):
        avg = avg + average(n % 10, (n//10) % 10) * 10**power
        return avg


def digits_average(n:int, avg:int=0, power:int=0) -> int:
    if n<10: return n
    else: 
        avg=average(n % 10, (n//10) % 10)
        return digits_average(n//10, avg + average(n % 10, (n//10) % 10) * 10**power , power+1)
    
        

print (digits_average(2103))


def digits_average(n):
    while n >= 10:
        avg = 0
        power = 0
        while n >= 10:
            avg = avg + average(n % 10, (n//10) % 10) * 10**power
            n //= 10
            power += 1
        n = avg
    return n
        



import math

def average(a, b):
    return math.ceil((a + b) / 2)

def adigits_average(n):
    if n < 10:
        return n
    else:
        return digits_average_helper(n, 0)

def adigits_average_helper(n, power):
    if n < 10:
        return n
    else:
        avg = average(n % 10, (n // 10) % 10) * 10 ** power
        return digits_average(avg) + digits_average_helper(n // 10, power + 1)
        


"""

























