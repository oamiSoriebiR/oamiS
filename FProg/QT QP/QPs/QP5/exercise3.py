def mask_data(data,n_characters, position):
    data_inv=""
    n_asterisco="*"*n_characters
    answ=""
    answ_inv=""
    if position=="begin":
        answ=n_asterisco
        for i in range(len(data)):
            if i > (n_characters-1):
                answ+=data[i]
        
    if position=="end":
        for i in data:
            data_inv=i+data_inv 
        for i in range(len(data_inv)):
            if i> (n_characters-1):
                answ_inv+=data_inv[i]
        answ_inv=n_asterisco+answ_inv
        for i in answ_inv:
            answ=i+answ
    return answ
        