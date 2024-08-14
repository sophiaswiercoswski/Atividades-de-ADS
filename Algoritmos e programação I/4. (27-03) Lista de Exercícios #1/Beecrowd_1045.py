'''
Beecrowd: Problema 1045
23/03/2024
Sophia Swiercoswski
'''

A, B, C = map(float, input().split())
lados = [A, B, C]
lados.sort(reverse=True)
A, B, C = lados

if A >= B + C:
    print ("NAO FORMA TRIANGULO")
elif (A * A) == (B * B) + (C * C):
    print ("TRIANGULO RETANGULO")
else:
    if (A * A) < (B * B) + (C * C):
        print ("TRIANGULO ACUTANGULO")
        if A == B == C:
            print ("TRIANGULO EQUILATERO")
        elif (A == B) or (B == C) or (A == C):
            print ("TRIANGULO ISOSCELES")
    elif (A * A) > (B * B) + (C * C):
        print ("TRIANGULO OBTUSANGULO")
        if (A == B) or (B == C) or (A == C):
            print ("TRIANGULO ISOSCELES")