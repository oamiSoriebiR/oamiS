def counting_chars(string,character):
    occurrences=0
    for i in string:
        if i==character:
            occurrences+=1
    if occurrences==0:
        occurrences=-1
    return occurrences

counting_chars("How much wood would a woodchuck chuck if a woodchuck could chuck wood?", "w")