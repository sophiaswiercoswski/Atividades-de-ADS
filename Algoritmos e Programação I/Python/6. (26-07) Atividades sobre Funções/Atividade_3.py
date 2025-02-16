# Criar função de triângulos
def triangulo(l1, l2, l3):  
    if (l1 >= l2 + l3) or (l2 >= l1 + l3) or (l3 >= l1 + l2):
        return "Triângulo não formado"  
    elif (l1 == l2) and (l2 == l3):
        return "Triângulo Equilátero"
    elif (l1 == l2) or (l2 == l3) or (l1 == l3):
        return "Triângulo Isósceles"
    elif (l1 != l2) and (l2 != l3):
        return "Triângulo Escaleno"

# Obter lados do triângulo do usuário
n1 = float(input("Digite o primeiro lado do triângulo: "))
n2 = float(input("Digite o segundo lado do triângulo: "))
n3 = float(input("Digite o terceiro lado do triângulo: "))

# Chamar função dos triângulos
print(triangulo(n1, n2, n3))