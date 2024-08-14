'''
Beecrowd: Problema 1178
26/07/2024
Sophia Swiercoswski
'''

# Ler um número decimal do usuário
X = float(input())

# Colocar número do usuário como o primeiro de uma lista
N = [X]
Y = X

# Criar um loop de 100
for i in range(100):
    Y = Y / 2
    N.append(Y)
    # Exibir indíce da lista e metade do número anterior
    print("N[{}] = {:.4f}".format(i, N[i]))