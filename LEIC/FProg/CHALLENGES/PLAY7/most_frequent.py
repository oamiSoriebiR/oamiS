def most_frequent(alist:list)->int:
    dict_freq={}
    answ_freq=0
    answ=0
    for i in alist:
        if i not in dict_freq: dict_freq[i]=1
        if i in dict_freq: dict_freq[i]+=1
    for i in dict_freq:
        if dict_freq[i]>answ_freq: 
            answ_freq=dict_freq[i]
            answ=i
        if dict_freq[i]==answ_freq: 
            if i>answ: answ=i
    return answ
