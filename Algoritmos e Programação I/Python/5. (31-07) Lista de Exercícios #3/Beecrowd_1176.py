# Ler quantidade de testes
T = int(input())

# Criar sequência de Fibonacci, onde os 2 primeiros termos são 0 e 1
n1 = 0
n2 = 1
X = [n1, n2]

# Repetir teste e ler números do usuário
for i in range(T):
    # Adicionar números na sequência em uma lista
    for i in range(T):
        prox = n1 + n2
        X.append(prox)
        n1 = n2
        n2 = prox

    # Ler a posição do número Fibonacci
    N = int(input())

    # Exibir posição dos números Fibonacci
    print(f"Fib({N}) = {X[N]}")