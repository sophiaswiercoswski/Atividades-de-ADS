maior = 0

for linha in range(3):
    print(linha)
    n = int(input())
    if n > maior:
        maior = n
        posição = linha + 1

print(maior)
print(posição)