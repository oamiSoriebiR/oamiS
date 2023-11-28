def repeated_letter(s:str) ->str:
    for i in range(len(s)):
        for t in range(i, len(s)):
            if i!=t and s[i]==s[t]: return s[i] 