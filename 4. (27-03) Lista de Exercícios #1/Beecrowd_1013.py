'''
Beecrowd: Problema 1013
21/03/2024
Sophia Swiercoswski
'''

a, b, c = input().split()
a = int (a)
b = int (b)
c = int (c)

maior_ab = (a + b + abs (a - b)) / 2
resultado = (maior_ab + c + abs (maior_ab - c)) / 2
print ("{:.0f} eh o maior". format(resultado))