.text

  #a0 - valor X                                                                     if (uint i = 0, i<tamanho, i++)
  #a1 - tamanho do vetor                                                              {if (a2[i] > X){a2[i]=0;}}
  #a2 - endereço do vetor

  CheckABS:

    mv  t0, a0 # t0 = valor limite X
    mv  t1, a1 # t2 = tamanho do vetor
    mv  t2, a2 # get elem address
    addi t4, x0, 0 #initialize counter

  checksize:
    beqz t1, return
    mv t5, 0(t2) # get elem
    bleu t5, t0, bigger  # if t2 <= t0 then go to bigger
    addi t2, zero, 0; # t2 = 0
    addi t4, t4, 1 # increase counter
  bigger:  
    addi t1, t1, -1 # decrease elem number
    addi t2, t2, 4 # get next adress
    j checksize  # jump to checksize
  return:
    mv a0, t4 # get resullt ready to return
    ret

    
    
        

