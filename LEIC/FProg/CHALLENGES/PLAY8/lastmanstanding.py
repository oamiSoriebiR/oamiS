def last_man_standing(alist, step):
    if len(alist)==1: return alist[0]
    else:
        step=step%len(alist)
        alist.pop(alist[step-1])
        step=step%len(alist)
        return last_man_standing(alist, step)