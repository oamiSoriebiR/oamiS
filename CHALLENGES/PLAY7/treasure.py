def treasure(clues:dict)->tuple:
    pos=(0,0)
    while pos in clues:
        pos1=clues[pos]
        clues.pop(pos)
        pos=pos1
    return pos