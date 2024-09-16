'''
Beecrowd: Problema 1099
09/04/2024
Sophia Swiercoswski
'''

N = int(input())

for x in range(N):
    numeros = [int(x) for x in input().split()]
    X = min(numeros)
    Y = max(numeros)
    soma_impar = 0
    for impar in range(X + 1, Y):
        if (impar % 2 != 0):
            soma_impar = soma_impar + impar
            
    print(soma_impar)