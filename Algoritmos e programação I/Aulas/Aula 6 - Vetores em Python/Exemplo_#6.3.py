# Criar uma lista vazia de números
numeros = []

# Ler 5 números do usuário e adiciona na lista
for cont in range(5):
    numeros.append(int(input("Digite um número: ")))

# Substituir todos os números ímpares informados pelo número 0
for i in range(len(numeros)):
    if numeros[i] % 2 != 0:
        numeros[i] = 0

# Exibir lista de números 
for n in numeros:
    print(n)