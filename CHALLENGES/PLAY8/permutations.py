def permutations(atuple:tuple) -> set:
    if len(atuple)==1: return {atuple}
    if len(atupel)==2: return {atuple, (atuple[1], atuple[0])}
    else:
        result = set()
        for i in range(len(atuple)):
            first = atuple[i]
            rest = atuple[:i] + atuple[i+1:]
            for p in permutations(rest):
                result.add((first,) + p)
        return result
