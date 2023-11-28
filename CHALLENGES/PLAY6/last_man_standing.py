def last_man_standing(a_list:list, step:int):
    to_remove=-1
    while len(a_list)>1:
        to_remove=(to_remove+step)%len(a_list)
        a_list.pop(to_remove)
        to_remove-=1
    return a_list[0]
    

print(last_man_standing([6, 3, 8, 2, 1, 8, 5, 2, 2], 10))