# Ler número e caractere do usuário
C = int(input())
T = input()
soma = 0

# Criar matriz 12x12
matriz = []
for i in range(12):
    coluna = []
    for j in range(12):
        n = float(input())
        # Somar números da coluna C 
        if j == C:
            soma += n
    matriz.append(coluna)

# Exibir soma e média dos números da matriz
if(T == 'S'):
    print("{:.1f}".format(soma))
else:
    print("{:.1f}".format(soma / 12))