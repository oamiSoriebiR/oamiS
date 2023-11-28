def count_until(tup):
    count=0
    for i in tup:
        if type(i)!=tuple: count+=1 
        else: break
    if count==len(tup): return -1
    else: return count

print(count_until((1, 2, (3,), 4.0, 5j)))