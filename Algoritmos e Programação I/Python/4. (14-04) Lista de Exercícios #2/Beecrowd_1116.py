n = int(input())

for n in range(n):
    x, y = map(int, input().split())
    if (y == 0):
        print ("divisao impossivel")
    else:
        print ("{:.1f}".format(x / y))