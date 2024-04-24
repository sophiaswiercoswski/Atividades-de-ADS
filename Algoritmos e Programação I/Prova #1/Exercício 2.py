# Escreva um programa que leia um número em centímetros e o mostre expresso em metros e centímetros.

cm = int(input("Digite um número em centímetros: "))

valor1 = cm // 100
valor2 = cm % 100

print(f"{cm} centímetros é igual a {valor1} metros e {valor2} centímetros")