price=int(input()) 
received=int(input()) 
change=received-price 

fiftynotes=change//50
twentynotes=(change%50)//20
tennotes=((change%50)%20)//10
fivenotes=(((change%50)%20)%10)//5

print (f"{fiftynotes} {twentynotes} {tennotes} {fivenotes}")