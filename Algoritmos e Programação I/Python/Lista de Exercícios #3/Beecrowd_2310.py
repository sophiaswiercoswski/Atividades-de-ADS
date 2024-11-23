# Ler número de jogadores do usuário e criar variáveis
N = int(input())
tentativas = []
acertos = []    
s_tentativas = 0
b_tentativas = 0
a_tentativas = 0
s_acertos = 0
b_acertos = 0
a_acertos = 0

# Criar loop determinado pelo N
for i in range(N): # N = linha de cada matriz
    # Ler nome dos jogadores
    nome = input()

    # Criar lista de tentativas e acertos de saques, bloqueios e ataques
    tentativas.append(list(map(int, input(). split())))
    acertos.append(list(map(int, input().split())))

# Somar tentativas de saques, bloqueios e ataques
    # S = [0] | B = [1] | A = [2]
	# Primeira linha de tentativas e segunda de acertos
for linha in range(len(tentativas)):
    s_tentativas += tentativas[linha][0]
    b_tentativas += tentativas[linha][1]
    a_tentativas += tentativas[linha][2]

# Somar acertos de saques, bloqueios e ataques
for linha in range(len(acertos)):
    s_acertos += acertos[linha][0]
    b_acertos += acertos[linha][1]
    a_acertos += acertos[linha][2]

# Exibir a porcentagem total de saques, bloqueios e ataques acertos
print("Pontos de Saque: {:.2f} %.".format(100 / s_tentativas * s_acertos))
print("Pontos de Bloqueio: {:.2f} %.".format(100 / b_tentativas * b_acertos))
print("Pontos de Ataque: {:.2f} %.".format(100 / a_tentativas * a_acertos))