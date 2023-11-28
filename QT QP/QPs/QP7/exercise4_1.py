def isomorphic(astring1, astring2):
    if len(astring1) != len(astring2):
        return f"'{astring1}' and '{astring2}' are not isomorphic"
    else:
        return f"'{astring1}' and '{astring2}' are isomorphic" if mapping(astring1, astring2) and mapping(astring2, astring1) else f"'{astring1}' and '{astring2}' are not isomorphic"

def mapping(astring1, astring2):
    map_dict = {}
    for i in range(len(astring1)):
        if astring1[i] not in map_dict:
            map_dict[astring1[i]] = astring2[i]
        elif map_dict[astring1[i]] != astring2[i]:
            return False
    return True
