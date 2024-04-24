# Escreva um aplicativo para calcular a área de um triângulo. Para isso faça a leitura dos valores necessários.

base = float(input("Digite o valor da base do triângulo: "))
altura = float(input("Digite o valor da altura do triângulo: "))
area = (base * altura) / 2

print("=================================")
print("O valor da área do triângulo é de {:.2f}".format(area))
print("=================================")