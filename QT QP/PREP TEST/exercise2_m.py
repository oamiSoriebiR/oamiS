import statistics
nota_PE1=int(input())
nota_PE2=int(input())
nota_PE3=int(input())
nota_PE4=int(input())

a=((nota_PE1+nota_PE2)/2)
b=((nota_PE1+nota_PE3)/2)
c=((nota_PE1+nota_PE4)/2)
d=((nota_PE2+nota_PE3)/2)
e=((nota_PE2+nota_PE4)/2)
f=((nota_PE3+nota_PE4)/2)

notas=[a,b,c,d]

if nota_PE3<40 and nota_PE4<40:
    print("RFF")
else:
    print (round(max(notas)))
