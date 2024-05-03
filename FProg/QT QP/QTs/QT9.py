heights = [(5,7), (5,8), (5,9), (6,0), (6,1)]
print(list(filter(lambda x: x[0] > x[1], heights)))