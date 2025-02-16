# Criar uma matriz vazia
M = []

# Ler caractere maiúsculo do usuário
O = input()

# Criar matriz 12x12
N = 12
for i in range(N):
    linha = []
    for j in range(N):
        linha.append(float(input()))
        M.append(linha)

# Calcular soma dos números da matriz (coluna 11 até 7 diminuindo 1)
soma = 0
cont = 12
coluna = 11
for i in range(1, 11):
    for j in range(coluna, 12):
        soma += M[i][j]
        cont -= 1
    if i < 5:
        i += 1
    else:
        i -= 1

# Exibir soma ou média dos números da matriz
if(O == 'S'):
    print("{:.1f}".format(soma))
else:
    print("{:.1f}".format(soma / 12))