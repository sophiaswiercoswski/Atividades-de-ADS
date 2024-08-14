# Criar uma matriz e exibir as linhas e colunas
matriz = [[1, 2, 3],
          [4, 5, 6],
          [7, 8, 9]]

for lista in matriz:
    linha = ""
    for item in lista:
        linha += str(item) + " "
    print(linha)