def biggest_member(atuple):
    max_length = 0
    max_tuple = None

    for elem in atuple:
        if isinstance(elem, tuple):
            sub_tuple = biggest_member(elem)
            if len(sub_tuple) > max_length:
                max_length = len(sub_tuple)
                max_tuple = sub_tuple

    return max_tuple
