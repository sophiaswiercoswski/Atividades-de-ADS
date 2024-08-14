n = int(input("Digite um número: "))

if n < 0:
    print(f"{n} é um número negativo")
elif n > 0:
    print(f"{n} é um número positivo")
else:
    print(f"{n} é um número neutro")