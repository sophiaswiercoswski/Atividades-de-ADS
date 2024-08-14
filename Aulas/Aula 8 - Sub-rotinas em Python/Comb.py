# Programa que calcula a combinação de N P a P

# Definir uma função para calcular o fatorial
def fatorial(n):
    prod = 1
    for x in range(2, n + 1):
        prod *= x
    return prod

# Definir uma função para calcular a combinação
def comb(n, p):
    result = fatorial(n) / (fatorial(p) * fatorial (n - p))
    return result

# Testar a função de combinação
print(comb(4, 2))
print(comb(5, 3))
print(comb(3, 2))