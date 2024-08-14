# Criar função com três parâmetros
def calcular(n1, n2, op):
    if (op == '+'):
        return n1 + n2
    elif (op == '-'):
        return n1 - n2
    elif (op == '*'):
        return n1 * n2
    elif (op == '/'):
        return n1 / n2

# Invocar função para cada operação
print(calcular(2, 10, '+'))
print(abs(calcular(2, 10, '-')))
print(calcular(2, 10, '*'))
print(calcular(2, 10, '/'))