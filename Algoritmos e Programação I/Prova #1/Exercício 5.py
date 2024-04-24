'''
Escreva um programa que leia dos números supostamente distintos do usuário e mostre:
a) Uma contagem progressiva do menor ao maior valor;
b) Uma contagem regressiva do maior até o menor valor;
c) A quantidade de números divisíveis por 3 no intervalo;
d) A soma total dos valores no intervalo.
'''

n1 = int(input("Digite um número: "))
n2 = int(input("Digite outro número: "))

cont_div = 0
soma = 0

if (n1 < n2):
    print("Contagem progressiva do menor ao maior valor: ")
    for x in range(n1, n2 + 1):
        print(x)
        if (x % 3 == 0):
            cont_div += 1
        soma += x
    print("Contagem regressiva do maior ao menor valor: ")
    for x in range(n2, n1 - 1, - 1):
        print(x)
    print(f"Números divisíveis por 3: {cont_div}")
    print(f"Soma dos valores no intervalo: {soma}")

if (n1 > n2):
    print("Contagem progressiva do menor ao maior valor: ")
    for x in range(n2, n1 + 1):
        print(x)
        if (x % 3 == 0):
            cont_div += 1
        soma += x
    print("Contagem regressiva do maior ao menor valor: ")
    for x in range(n1, n2 - 1, -1):
        print(x)
    print(f"Números divisíveis por 3: {cont_div}")
    print(f"Soma dos valores no intervalo: {soma}")