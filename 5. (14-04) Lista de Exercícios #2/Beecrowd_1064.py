'''
Beecrowd: Problema 1064
02/04/2024
Sophia Swiercoswski
'''

cont = 0
soma = 0

for numero in range(6):
    numero = float(input())
    if numero > 0:
        cont += 1
        soma += numero

soma /= cont

print(f"{cont} valores positivos")
print("{:.1f}".format(soma))