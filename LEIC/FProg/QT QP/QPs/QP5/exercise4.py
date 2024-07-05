def multi(g):
    edge_counts = {}
    for edge in g:
        if edge in edge_counts:
            edge_counts[edge] += 1
        else:
            edge_counts[edge] = 1
    result = [(edge[0], edge_counts[edge], edge[1]) for edge in edge_counts]
    return tuple(result)




#print(tuple(sorted(multi((('A','B'),('A','C'),('B','C'),('C','B'),('A','B'))))))

#print(tuple(sorted(multi(()))))

#print(tuple(sorted(multi(((1,2),(2,3),(3,4))))))
#print(tuple(sorted(multi((('A','B'),('B','A'))))))