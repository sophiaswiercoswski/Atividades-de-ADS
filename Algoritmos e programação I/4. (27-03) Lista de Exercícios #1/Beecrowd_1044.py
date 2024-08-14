'''
Beecrowd: Problema 1044
18/03/2024
Sophia Swiercoswski
'''

a, b = map(int, input(). split())
if (b % a) == 0 or (a % b) == 0:
    print ("Sao Multiplos")
else:
    print ("Nao sao Multiplos")