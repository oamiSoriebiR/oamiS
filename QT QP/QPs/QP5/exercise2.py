def camel_case(phrase):
    answ=""
    letter=""
    alpha=True
    for i in phrase:
        if not i.isalpha():
           alpha=False
        if not alpha and i.isalpha():
            letter=i.upper()
            answ+=letter
            alpha=True
        elif alpha==True and i.isalpha():
            letter=i.lower()
            answ+=letter
            alpha=True
    return answ