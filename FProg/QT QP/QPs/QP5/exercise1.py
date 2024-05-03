def rm_letter_rev(ch, s):
    res=""
    for c in s:
        if c!=ch:
            res=c+res
    return res
