'''
Beecrowd: Problema 1116
05/04/2024
Sophia Swiercoswski
'''

n = int(input())

for n in range(n):
    x, y = map(int, input().split())
    if (y == 0):
        print ("divisao impossivel")
    else:
        print ("{:.1f}".format(x / y))