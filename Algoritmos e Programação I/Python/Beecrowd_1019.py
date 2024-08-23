N = int(input())
horas = N // (60 * 60)
N = N % (60 * 60)

minutos = N // 60
N = N % 60

print (f"{horas}:{minutos}:{N}")