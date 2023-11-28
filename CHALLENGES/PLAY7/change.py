def change(money:int) ->dict:
    """take an ammount of money and returns a dictionary with the ammount of each coin to give chane in minimum ammount of coins"""
    ls_money=[2.0, 1.0, 0.5, 0.2, 0.1, 0.05, 0.02, 0.01]
    answ={2.0:0, 1.0:0, 0.5:0, 0.2:0, 0.1:0, 0.05:0, 0.02:0, 0.01:0}
    money*=100
    for i in [200,100,50,20,10,5,2,1]:
        answ[i/100]=round(money//i)
        money%=i
    
    return answ

print(change(7.21))