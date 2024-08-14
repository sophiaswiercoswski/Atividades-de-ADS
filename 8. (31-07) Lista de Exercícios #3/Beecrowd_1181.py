'''
Beecrowd: Problema 1181
17/07/2024
Sophia Swiercoswski
'''

'''
Problema que deve realizar uma alteração de soma
ou média em uma linha de uma matriz de 12x12
'''

# Criar uma matriz vazia
matriz = []

# Ler a  linha e a operação a ser realizada
L = int(input())
T = input()

# Tamanho da matriz
N = 12

# Ler a matriz
for i in range(N):
    linha = []
    for j in range(N):
        linha.append(float(input()))
    matriz.append(linha)

# Somar todos os valores da linha L
soma = 0
for n in matriz[L]:
    soma += n

# Exibir o resultado
if T == "S":
    print("{:.1f}".format(soma))
else:
    print("{:.1f}".format(soma / N))