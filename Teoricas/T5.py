def rect_area(width, lenght):
    area=width*lenght
    return area

def square_area(side):
    area = rect_area(side,side)
    return area

def prism_rect_volume(height,width,lenght):
    area = rect_area(width,lenght)
    return area*height

def is_square(length,width):
    if length==width:
        return "Y"
    elif length<=0 or width<=0:
        return "Only use positive numbers"
    else:
        return "N"

n=is_square(int(input()),int(input()))

print (n)


#print(prism_rect_volume(2,3,4))

#for i in range(1, 11):
#    print (f"area of a square with {i} unites of side: {square_area(i)}")