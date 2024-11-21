# Criar lista de números pares e ímpares
par = []
impar = []

# Criar função para exibir lista par ou ímpar
def exibir_lista(lista, par_impar):
    for i, n in enumerate(lista):
        print(f"{par_impar}[{i}] = {n}")

# Ler 15 números inteiros do usuário e definir se é par ou ímpar
for i in range(15):
    n = int(input())
    if(n % 2 == 0):
        par.append(n)
        # Exibir 5 primeiros números pares e resetar lista
        if(len(par) == 5):
            exibir_lista(par, "par")
            par = []
    else:
        impar.append(n)
        # Exibir 5 primeiros números ímpares e resetar lista
        if(len(impar) == 5):
            exibir_lista(impar, "impar")
            impar = []

# Exibir números restantes das listas
exibir_lista(impar, "impar")
exibir_lista(par, "par")