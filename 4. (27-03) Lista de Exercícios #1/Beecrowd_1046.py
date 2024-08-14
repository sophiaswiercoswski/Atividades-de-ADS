'''
Beecrowd: Problema 1046
23/03/2024
Sophia Swiercoswski
'''

i, f = map(int, input(). split())

# Dia todo
if i == f:
    horas = 24

# Dias diferentes
elif i > f:
    horas = int(abs(24 - i + f))
    
# Mesmo dia
else:
    horas = int(abs(i - f))

print ("O JOGO DUROU {} HORA(S)".format (horas))