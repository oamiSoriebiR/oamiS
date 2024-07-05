def count_chars(a_string:string) -> tuple: 
    alpha=0
    digit=0
    symbol=0
    for i in range (len(a_string)):
        a=a_string[i]
        if a.isalpha(): alpha+=1
        elif a.isnumeric(): digit+=1
        elif not (a.isalpha() or a.isnumeric()): symbol+=1
    return (alpha, digit, symbol)