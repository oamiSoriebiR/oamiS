def lost_element(s1:set, s2:set)->int:
    for i in s1: 
        if i not in s2: return i
    for i in s2: 
        if i not in s1: return i
        