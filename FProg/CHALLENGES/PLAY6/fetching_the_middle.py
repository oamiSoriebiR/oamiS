def fetch_middle_inner(ls:list) -> int:
    middle=len(ls)//2
    if len(ls)%2!=0: return ls[middle]
    else:
        return (ls[middle-1]+ls[middle])/2

def fetch_middle(llists:list) -> list:
    answ=[]
    for llist in llists:
        appendix=fetch_middle_inner(llist)
        answ.append(appendix)
    return answ

