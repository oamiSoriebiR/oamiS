a=int(input())
b=int(input())


c=((a+b)*2*((-1)**((a+b)%2))+(2*(a+b)+((a+b)*((a+b)%2))+((a*b)*((a+b)%2)))*((a+b)%2))

print (c)