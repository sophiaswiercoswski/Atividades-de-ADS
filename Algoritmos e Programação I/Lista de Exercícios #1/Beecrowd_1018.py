n = int(input())
print (n)

notas100 = n // 100
n = n % 100

notas50 = n // 50
n = n % 50

notas20 = n // 20
n = n % 20

notas10 = n // 10
n = n % 10

notas5 = n // 5
n = n % 5

notas2 = n // 2
n = n % 2

notas1 = n // 1
n = n % 1

print ("{} nota(s) de R$ 100,00".format (notas100))
print ("{} nota(s) de R$ 50,00".format (notas50))
print ("{} nota(s) de R$ 20,00".format (notas20))
print ("{} nota(s) de R$ 10,00".format (notas10))
print ("{} nota(s) de R$ 5,00".format (notas5))
print ("{} nota(s) de R$ 2,00".format (notas2))
print ("{} nota(s) de R$ 1,00".format (notas1))