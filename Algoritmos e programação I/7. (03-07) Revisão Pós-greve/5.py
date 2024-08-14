n1 = int(input("Digite o primeiro número: "))
n2 = int(input("Digite o segundo número: "))
n3 = int(input("Digite o terceiro número: "))

maior = n1
if (n2 > maior):
    maior = n2
if (n3 > maior):
    maior = n3
print(f"O número maior é {maior}")