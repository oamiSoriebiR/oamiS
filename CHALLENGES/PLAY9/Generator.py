def generator(intlist:list) -> list:
    return iter(map(lambda x :(range(x[0], x[1]+1)) , intlist))