'''
Beecrowd: Problema 1117
07/04/2024
Sophia Swiercoswski
'''

cont_n = 0
media = 0

while cont_n < 2:
    nota = float(input())
    if (nota >= 0) and (nota <= 10):
        cont_n += 1
        media = media + nota
    else:
        print ("nota invalida")

print ("media = {:.2f}".format(media / 2))