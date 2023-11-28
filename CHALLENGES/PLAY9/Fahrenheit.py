def to_fahrenheit(t:list) -> list:
    return list(map(lambda x: round(x*1.8 +32 , 2), t))