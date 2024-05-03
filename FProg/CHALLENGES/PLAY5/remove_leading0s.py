def remove_leading(ip: str) -> str:
    ls = ip.split(".")
    new_ls = []
    for num in ls:
        new_ls.append(str(int(num)))
    answer = ".".join(new_ls)
    return answer

dict.get