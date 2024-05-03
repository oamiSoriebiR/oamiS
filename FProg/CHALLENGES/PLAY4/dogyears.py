def dogs(h_age):
    human_age=int(h_age)
    dog_age=0
    for i in range(1,human_age+1):
        if i<3:
            dog_age+=10.5
        if i >=3:
            dog_age+=4
    return dog_age