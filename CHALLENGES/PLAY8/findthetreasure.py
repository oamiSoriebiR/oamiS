def find_treasure(pos, steps):
    x, y = pos

    if len(steps) == 0:
        return (x, y)

    if steps[0] == "up":
        y += 1
    elif steps[0] == "down":
        y -= 1
    elif steps[0] == "left":
        x -= 1
    elif steps[0] == "right":
        x += 1

    return find_treasure((x, y), steps[1:])



