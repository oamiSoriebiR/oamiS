def check_friendly(number_one, number_two):
    import math
    a=0
    for i in range(2,number_one+1,):
        b=number_one/i
         
        if number_one%i==0:
            a+=b
    if number_one==number_two:
        return (f"identical numbers: {number_one}")
    if a==number_two:
        return (f"{number_one} and {number_two} are friendly")
    if a!=number_two:
        return (f"sum of divisors of {number_one} is not {number_two}")
