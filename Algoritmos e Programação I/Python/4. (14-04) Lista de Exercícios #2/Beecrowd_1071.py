x = int(input())
y = int(input())
soma = 0

for impar in range(y + 1, x):
    if (impar % 2 != 0):
        soma += impar
print (soma)