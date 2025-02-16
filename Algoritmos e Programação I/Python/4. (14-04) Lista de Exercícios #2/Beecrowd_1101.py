while True:
    numeros = [int(x) for x in input().split()]
    M = min(numeros)
    N = max(numeros)

    if (M <= 0) or (N <= 0):
        break

    texto = ""
    soma = 0
    for numero in range (M, N + 1):
        soma = soma + numero
        texto = texto + str(numero) + " "
        
    print (f"{texto}Sum={soma}")