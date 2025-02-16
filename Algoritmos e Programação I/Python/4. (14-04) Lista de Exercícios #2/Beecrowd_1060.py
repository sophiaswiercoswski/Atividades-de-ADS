cont = 0

for numero in range(6):
    numero = float(input())
    if numero > 0:
        cont += 1

print(f"{cont} valores positivos")