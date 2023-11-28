import math

a=int(input())
b=int(input())
c=int(input())

d=(-b-math.sqrt((b**2)-4*a*c))/(2*a)
e=(-b+math.sqrt((b**2)-4*a*c))/(2*a)

d=round(d, 2)
e=round(e, 2)
print (f"The sollutions are {d} and {e}")