def isomorphic(astring1, astring2):
    if len(astring1) != len(astring2):
        return f"'{astring1}' and '{astring2}' are not isomorphic"
    map_forward = {}
    map_backward = {}
    for char1, char2 in zip(astring1, astring2):
        if char1 in map_forward:
            if map_forward[char1] != char2:
                return f"'{astring1}' and '{astring2}' are not isomorphic"
        else:
            if char2 in map_backward:
                return f"'{astring1}' and '{astring2}' are not isomorphic"
            map_forward[char1] = char2
            map_backward[char2] = char1
    return f"'{astring1}' and '{astring2}' are isomorphic"