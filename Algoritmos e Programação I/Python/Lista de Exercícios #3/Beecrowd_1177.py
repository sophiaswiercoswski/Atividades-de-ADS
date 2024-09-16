# Ler um número do usuário
T = int(input())
N = []

# Criar loop para repetir 1000 vezes
for i in range(1000):
    # Adicionar contagem na lista até um número antes de T
    for x in range(T):
        N.append(x)

    # Exibir índice e contagem da lista
    print(f"N[{i}] = {N[i]}")