number=input()
cont=False
str_b=number[0]
number=number[1:len(number)]
b=int(str_b)
for i in number:
    int_i=int(i)
    if int_i==0 and b==9:
        cont=True
    elif int_i==b+1:
        cont=True
    elif int_i!=b+1:
        cont=False
    b=int_i
if cont:
    print("Looping number")
if not cont:
    print("Not a looping number")

    