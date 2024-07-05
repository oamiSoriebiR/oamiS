a=int(input())
b=int(input())
a+=6
b+=51
a+=b//60
b=b%60
if a>24:
    a-=a//24

hours=a
minutes=b
print(f"{hours:2f}:{minutes:2d}")