le=int(input())
re=int(input())
pe=int(input())
te=int(input())

grade= (le+re+13*pe+5*te)/100
int_grade=int(grade)
rounding_var=grade-int_grade >= 0.5

if not le in range(101) or not re in range(101) or not pe in range(101) or not te in range(101):
    print("Input error")
elif pe<40 or te<40:
    print("RFF")
else:
    if rounding_var:
        print(int_grade)+1
    else:
        print(int_grade)