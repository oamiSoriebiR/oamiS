def bagdiff(xs, ys):
    for i in xs:
        if i in ys:
            xs.remove(i)
            ys.remove(i)
    return xs