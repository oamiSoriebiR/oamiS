def academy_awards(alist:list)->dict:
    dict_awards={}
    for i in alist:
        if i[1] not in dict_awards:
            dict_awards[i[1]]=1
        elif i[1] in dict_awards:
            dict_awards[i[1]]+=1
    return dict_awards

        