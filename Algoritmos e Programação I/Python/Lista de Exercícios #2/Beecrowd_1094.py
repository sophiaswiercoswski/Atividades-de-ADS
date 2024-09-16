'''
Beecrowd: Problema 1094
05/04/2024
Sophia Swiercoswski
'''

n = int(input()) # Número de casos/linhas

total_c = 0
total_r = 0
total_s = 0

for n in range(n):
    quant, tipo = input().split()
    quant = int (quant)
    tipo = str (tipo)
    if (tipo == "C"):
        total_c = quant + total_c
    elif (tipo == "R"):
        total_r = quant + total_r
    elif (tipo == "S"):
        total_s = quant + total_s

total = total_c + total_r + total_s
percen_c = (100 * total_c) / total
percen_r = (100 * total_r) / total
percen_s = (100 * total_s) / total

print (f"Total: {total} cobaias")
print (f"Total de coelhos: {total_c}")
print (f"Total de ratos: {total_r}")
print (f"Total de sapos: {total_s}")
print ("Percentual de coelhos: {:.2f} %".format(percen_c))
print ("Percentual de ratos: {:.2f} %".format(percen_r))
print ("Percentual de sapos: {:.2f} %".format(percen_s))