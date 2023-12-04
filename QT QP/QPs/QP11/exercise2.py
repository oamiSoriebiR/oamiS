def find_me(f, limits):
    low, high = limits
    count = 0

    while low <= high:
        mid = (low + high) // 2
        result = f(mid)
        count += 1

        if result == 0:
            return count
        elif result == -1:
            high = mid - 1
        else:
            low = mid + 1

    return -1
