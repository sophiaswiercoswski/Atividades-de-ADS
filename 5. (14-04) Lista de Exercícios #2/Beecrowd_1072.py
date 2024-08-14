'''
Beecrowd: Problema 1072
04/04/2024
Sophia Swiercoswski
'''

n = int(input())

cont_in = 0
cont_out = 0

for n in range (n):
    n = int(input())
    if (n >= 10) and (n <= 20):
        cont_in += 1
    elif (n < 10) or (n > 20):
        cont_out += 1

print (f"{cont_in} in")
print (f"{cont_out} out")
