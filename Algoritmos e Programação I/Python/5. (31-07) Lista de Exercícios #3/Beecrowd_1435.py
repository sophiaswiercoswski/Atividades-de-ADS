# Ler um número inteiro > 0 do usuário
while True:
    N = int(input())
    if(N == 0):
        break
    
    # Criar array bidimensional
    for i in range(N):
        for j in range(N):
            # Distância dos lados
            if(i < N - i - 1):
                lado = i
            else:
                lado = N - i - 1
            
            # Distância superior e inferior
            if(j < N - j - 1):
                coluna = j
            else:
                coluna = N - j - 1

            # Definir a menor distância
            if(coluna < lado):
                distancia = lado
            else:
                distancia = lado

            # Exibir a menor distância seguido de um espaço em branco
        for i in range(N):
            texto = ''
            for j in range(N):
                texto += " %3d" %distancia[i][j]
            print(texto[1:])
        print("")