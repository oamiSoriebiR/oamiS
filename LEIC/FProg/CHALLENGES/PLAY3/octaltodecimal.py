number=input()
number_octal=int(number)
number_decimal=0
valid_number=True
length=len(number)
for i in range(length):
    str_i=number[i]
    int_i=int(str_i)
    if int_i>7:
        valid_number=False
for digit in range(length):
    str_digit=number[-(digit+1)]
    int_digit=int(str_digit)
    number_decimal+=(int_digit*(8**digit))
if valid_number:
    print(number_decimal)
if not valid_number:
    print("Not a valid number.")