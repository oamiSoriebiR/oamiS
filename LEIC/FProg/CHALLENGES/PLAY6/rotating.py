def rotate_list(l:list) -> list:
    answ=[]
    for i in range(3, len(l)):
        answ.append(l[i])
    for i in range(3):
        answ.append(l[i])
        
    return answ
