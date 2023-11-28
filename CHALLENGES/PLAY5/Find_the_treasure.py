def map(pos:tuple, steps:str) -> tuple:
    x=pos[0]
    y=pos[1]
    steps=steps.split("-")
    for i in steps:
        if i == "up": y+=1
        if i == "down": y-=1
        if i == "right": x+=1
        if i == "left": x-=1
    return(x,y)
