def rearrange(l:list) ->list: return (list(filter(lambda x: x<=0, l)) + list(filter(lambda x: x>0, l)))