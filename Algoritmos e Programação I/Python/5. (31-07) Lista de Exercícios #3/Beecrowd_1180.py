# Ler um número do usuário e criar uma lista
N = int(input())
X  = []

# Ler números na mesma linha e colocar na lista
X = list(map(int, input().split()))

# Armazenar o menor valor da lista e o seu índice
menor_valor = min(X)
indice = X.index(menor_valor)

# Exibir o menor valor da lista e seu índice
print(f"Menor valor: {menor_valor}")
print(f"Posicao: {indice}")