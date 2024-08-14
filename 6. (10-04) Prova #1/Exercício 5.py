n1 = int(input("Digite um número: "))
n2 = int(input("Digite outro número: "))

cont_div = 0
soma = 0

if (n1 < n2):
    # Contagem progressiva
    print("Contagem progressiva do menor ao maior valor: ")
    for x in range(n1, n2 + 1):
        print(x)
        # Números divísiveis
        if (x % 3 == 0):
            cont_div += 1
        # Soma valores intervalos
        soma += x
    #Contagem regressiva
    print("Contagem regressiva do maior ao menor valor: ")
    for x in range(n2, n1 - 1, - 1):
        print(x)
    print(f"Números divisíveis por 3: {cont_div}")
    print(f"Soma dos valores no intervalo: {soma}")

if (n2 < n1):
    # Contagem progressiva
    print("Contagem progressiva do menor ao maior valor: ")
    for x in range(n2, n1 + 1):
        print(x)
        # Números divísiveis
        if (x % 3 == 0):
            cont_div += 1
        # Soma valores intervalos
        soma += x
    #Contagem regressiva
    print("Contagem regressiva do maior ao menor valor: ")
    for x in range(n1, n2 - 1, -1):
        print(x)
    print(f"Números divisíveis por 3: {cont_div}")
    print(f"Soma dos valores no intervalo: {soma}")