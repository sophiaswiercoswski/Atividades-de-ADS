'''
Beecrowd: Problema 1079
13/04/2024
Sophia Swiercoswski
'''

n = int(input())

for testes in range(n):
    a, b, c = map(float, input().split())
    n = (a * 2 + b * 3 + c * 5) / 10
    print("{:.1f}".format(n))