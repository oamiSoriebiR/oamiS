P=int(input("principal amount:"))
r=float(input("interest rate:"))
n=int(input("payment frequency: "))

A= round(P*((1+(r/n))**(2*n)) , 3)
print(A)