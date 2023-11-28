def mastermind(g1, g2, g3, c1, c2, c3):

    points=0

    if g1==c1:
        points+=3
        g1="x"
        c1="z"
       

    if g2==c2:
        points+=3
        g2="x"
        c2="z"
       
    
    if g3==c3:
        points+=3
        g3="x"
        c3="z"
       

    if g1==c2:
        points+=1
        g1="x"
        c2="z"
      
    
    if g1==c3:
        points+=1
        g1="x"
        c3="z"
       
    
    if g2==c1:
        points+=1
        g2="x"
        c1="z"
        
    
    if g2==c3:
        points+=1
        g2="x"
        c3="z"
       
    
    if g3==c1:
        points+=1
        g3="x"
        c1="z"
        
    
    if g3==c2:
        points+=1
        g3="x"
        c2="z"


    return points

