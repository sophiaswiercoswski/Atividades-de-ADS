# Objetivo: Mostrar o maior de dois números e descobrir se é par ou ímpar

# Ler dois valores inteiros
a = int(input("Digite o primeiro valor: "))
b = int(input("Digite o segundo valor: "))

# Descobrir o maior valor entre eles
if a > b:
    maior = a
else:
    maior = b

# Mostrar o maior valor
print ("Maior valor:", maior)

# Definir se o maior valor é par ou ímpar
if maior % 2 == 0:
    print ("O valor", maior, "é par")
else:
    print ("O valor", maior, ("é ímpar"))