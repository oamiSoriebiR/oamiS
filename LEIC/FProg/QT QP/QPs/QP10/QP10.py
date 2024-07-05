def transitive_closure(r): return set(r) if (closure := set(r)) == (closure_until_now := closure | set((x, w) for x, y in closure for q, w in closure if q == y)) else transitive_closure(closure_until_now)
def union_with(combine, dict1:dict, dict2:dict) -> dict: return {k: combine(dict1[k], dict2[k]) if k in dict1 and k in dict2 else dict1.get(k, dict2.get(k)) for k in dict1.keys() | dict2.keys()}
def pythagoreans(a,b): return list(filter(lambda x: x[0]**2 + x[1]**2==x[2]**2, [(x,y,z) for x in list(range(a,b)) for y in list(range(a,b)) for z in list(range(a,b)) if x<y and y<z]))
def comprehensions(i: int, j:int) -> tuple: return (list(filter(lambda x: x%10==3 or x%10==8 ,list(range(i, j+1)))), tuple(map(lambda x: round(x**(1/2), 2), list(range(i, j+1)))),dict(zip(list(range(i, j+1)), list(map(lambda x: chr(x), list(range(i, j+1)))))))
def square_odds(values: str) -> str: return ",".join(list(map(lambda x: str(int(x) ** 2), list(filter(lambda x: int(x) % 2 == 1, values.split(","))))))

