n1=int(input())
n2=int(input())
r=0
while n1!=0 and n2!=0:
    a1=n1%10
    a2=n2%10
    r=r*10+a1
    r=r*10+a2
    n1//=10
    n2//=10
print (r)