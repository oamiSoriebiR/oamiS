def pattern_hunting(l1:list, l2:list, p:str):
    list_len=len(l1)
    l1_pattern=[]
    l2_pattern=[]
    answ=[]
    for i in l1: 
        if p in i: l1_pattern.append(p) 
        else: l1_pattern.append(None)
    for i in l2: 
        if p in i: l2_pattern.append(p) 
        else: l2_pattern.append(None)
    for i in range(list_len): 
        if l1_pattern[i]==p: answ.append(l2[i])
        if l2_pattern[i]==p: answ.append(l1[i])
    answ=sorted(answ)
    answer=reversed(answ) 
    return answer

