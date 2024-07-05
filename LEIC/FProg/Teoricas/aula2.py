distancia = input("distância a percorrer (km): ")
velocidade = input("velocidade da viagem (km/h): ")
dist_int = int(distancia)
velo_int = int(velocidade)
tempo = dist_int / velo_int

#print("tempo para percorrer (horas):", tempo)#
#print("tempo para percorrer (minutos):", tempo*60)#
dias = tempo // 24
horas = round(tempo % 24)
anos = dias //365
dias_ano = dias % 365
#horas_ano =# 

#dias_txt = str(int(dias)) + " dias"#
#horas_txt = str(int(horas)) + " horas"#
anos_txt = str(int(anos)) + " anos"
dias_ano_txt = str(dias) + " dias"


print("Tempo a percorrer: ", anos_txt, dias_ano_txt)

#print("Dias: ", dias)#
#print("Horas: ", horas)#
# print("Tipo dist_int: ", type(dist_int))#
#print("Tipo distancia: ", type(distancia))#

#print("Tipo tempo: ", type(tempo))#
#print("Tempo: ", tempo)#
#tempo_arredondado = round(tempo)#
#tempo = int(tempo)#
#print("Tempo: ", tempo)#
#print("Tipo tempo: ", type(tempo))#
#print("Tipo tempo: ", type(tempo_arredondado))#
#print("Tempo arredondado: ", tempo_arredondado)#


