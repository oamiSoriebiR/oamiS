def x_union(list1, list2):
    list2_test=list(map(lambda x: x[0],list2))
    
    listtosum=list(filter(lambda x: x[0] not in list2_test, list1))

    list1_test=list(map(lambda x: x[0],list1))
    
    listtosum1=list(filter(lambda x: x[0] not in list1_test, list2))

    return (listtosum+listtosum1)




