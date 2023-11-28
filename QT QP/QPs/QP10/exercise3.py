def pythagoreans(a,b): return list(filter(lambda x: x[0]**2 + x[1]**2==x[2]**2, [(x,y,z) for x in list(range(a,b)) for y in list(range(a,b)) for z in list(range(a,b)) if x<y and y<z]))

