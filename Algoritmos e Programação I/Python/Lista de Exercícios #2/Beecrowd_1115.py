'''
Beecrowd: Problema 1115
05/04/2024
Sophia Swiercoswski
'''

x = int
y = int

while (x != 0) or (y != 0):
    x, y = map(int, input().split())
    if (x > 0) and (y > 0):
        print ("primeiro")
    elif (x < 0) and (y > 0):
        print ("segundo")
    elif (x < 0) and (y < 0):
        print ("terceiro")
    elif (x > 0) and (y < 0):
        print ("quarto")