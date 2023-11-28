def longest(s:str) -> int:
    a=s.split()
    length=0
    for i in a:
        if len(i)>length: length=len(i)
    return length