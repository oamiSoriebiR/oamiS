.text

  #a0 - valor X                                                                     if (uint i = 0, i<tamanho, i++)
  #a1 - tamanho do vetor                                                              {if (a2[i] > X){a2[i]=0;}}
  #a2 - endereço do vetor

  CheckABS:

    mv  t0, a0 # t0 = valor limite X
    mv  t2, a1 # t2 = tamanho do vetor


