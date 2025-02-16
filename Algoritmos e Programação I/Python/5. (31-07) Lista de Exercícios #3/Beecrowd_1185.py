# Ler um caractere do usuário
O = input()
soma = 0

# Criar matriz 12x12
matriz = []
for i in range(12, 0, -1):
    linha = []
    for j in range(12, 0 -1):
        n = float(input())

        # Somar números inseridos caso estes estejam acima da diagonal
        if(i < j): 
            soma += n
        linha.append(n)
        matriz.append(linha)

# Exibir soma e média
if(O == 'S'):
    print("{:.1f}".format(soma))
else:
    print("{:.1f}".format(soma / 66))