'''
Beecrowd: Problema 1065
03/04/2024
Sophia Swiercoswski
'''

cont = 0

for numero in range(5):
    numero = int(input())
    if numero % 2 == 0:
        cont += 1

print (f"{cont} valores pares")