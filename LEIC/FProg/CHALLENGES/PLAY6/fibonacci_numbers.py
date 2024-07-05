def fib(b:int) -> list:
    base_ls=[0,1]
    answ=[1,2]
    if b==2: return base_ls
    if b==1: return [0]
    if b==3: return [0,1,1]
    if b>3: 
        for i in range(3,b):
            len_answ=len(answ)
            c=answ[len_answ-2]+answ[len_answ-1]
            answ.append(c)
    return base_ls+answ
