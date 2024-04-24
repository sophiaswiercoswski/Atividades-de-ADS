'''
Escreva um programa que leia o valor de 2 atributos (ataque e defesa) de um personagem (onde cada um pode variar de 0 a 10).
Em seguida, calcule a média aritmética destes atributos e mostre: (i) a média e (ii) a classe deste personagem, baseada nos seguintes critérios:
Maior ou igual a 9,0 | Classe S
Maior ou igual a 8,0 e menor que 9,0 | Classe A
Inferior a 8,0 | Classe B
'''

while True:
    ataque = float(input("Valor do ataque [0 a 10]: "))
    defesa = float(input("Valor da defesa [0 a 10 ]: "))

    if (ataque > 10) or (defesa > 10):
        print("Os valores dos atributos não podem ultrapassar de 10")
        break

    media = (ataque + defesa) / 2

    print("=================================")
    if (media >= 9.0):
        print(f"Média dos atributos: {media}")
        print("Classe: S")
    elif (media >= 8.0) and (media < 9,0):
        print(f"Média dos atributos: {media}")
        print("Classe: A")
    elif (media < 8.0):
        print(f"Média dos atributos: {media}")
        print("Classe: B")
    print("=================================")